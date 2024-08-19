document.addEventListener("DOMContentLoaded", function() {
    const userForm = document.getElementById("userForm");
    const userList = document.getElementById("userList");

    let users = JSON.parse(localStorage.getItem("users")) || [];
    let regionCounts = JSON.parse(localStorage.getItem("regionCounts")) || Array(9).fill(0);
    let energySourceCounts = JSON.parse(localStorage.getItem("energySourceCounts")) || Array.from({ length: 9 }, () => ({
        alternativo: 0,
        fontes_sustentavel: 0,
        nao_tem_energia: 0,
        comprada_com_companhia: 0
    }));

    function updateRegionCountTable() {
        for (let i = 0; i < 9; i++) {
            document.getElementById(`region${i+1}`).textContent = regionCounts[i];
        }
    }

    function updateEnergySourceTable() {
        for (let i = 0; i < 9; i++) {
            document.getElementById(`region${i+1}_alternativo`).textContent = energySourceCounts[i].alternativo;
            document.getElementById(`region${i+1}_fontes_sustentavel`).textContent = energySourceCounts[i].fontes_sustentavel;
            document.getElementById(`region${i+1}_nao_tem_energia`).textContent = energySourceCounts[i].nao_tem_energia;
            document.getElementById(`region${i+1}_comprada_com_companhia`).textContent = energySourceCounts[i].comprada_com_companhia;
        }
    }

    function renderUsers() {
        userList.innerHTML = "";
        users.forEach((user, index) => {
            const userDiv = document.createElement("div");
            userDiv.className = "user";

            const userInfo = document.createElement("div");
            userInfo.innerHTML = `
                <strong>Nome:</strong> ${user.name} <br>
                <strong>Endereço:</strong> ${user.address} <br>
                <strong>CEP:</strong> ${user.cep} <br>
                <strong>Data e Hora:</strong> ${user.dateTime} <br>
                <strong>Fonte de Energia:</strong> ${user.energySource}
            `;
            userDiv.appendChild(userInfo);

            const editButton = document.createElement("button");
            editButton.textContent = "Editar";
            editButton.onclick = function() {
                editUser(index);
            };
            userDiv.appendChild(editButton);

            const deleteButton = document.createElement("button");
            deleteButton.textContent = "Excluir";
            deleteButton.onclick = function() {
                deleteUser(index);
            };
            userDiv.appendChild(deleteButton);

            userList.appendChild(userDiv);
        });
    }

    function editUser(index) {
        const user = users[index];
        document.getElementById("name").value = user.name;
        document.getElementById("address").value = user.address;
        document.getElementById("cep").value = user.cep;
        document.getElementById("dateTime").value = user.dateTime;
        document.getElementById("energySource").value = user.energySource;
        deleteUser(index);
    }

    function deleteUser(index) {
        const user = users[index];
        const cepFirstDigit = user.cep.charAt(0);
        if (cepFirstDigit >= '1' && cepFirstDigit <= '9') {
            regionCounts[cepFirstDigit - 1]--;
            energySourceCounts[cepFirstDigit - 1][user.energySource]--;
            localStorage.setItem("regionCounts", JSON.stringify(regionCounts));
            localStorage.setItem("energySourceCounts", JSON.stringify(energySourceCounts));
        }

        users.splice(index, 1);
        localStorage.setItem("users", JSON.stringify(users));
        renderUsers();
        updateRegionCountTable();
        updateEnergySourceTable();
    }

    userForm.addEventListener("submit", function(event) {
        event.preventDefault();

        const name = document.getElementById("name").value;
        const address = document.getElementById("address").value;
        const cep = document.getElementById("cep").value || "Não informado";
        const dateTime = document.getElementById("dateTime").value;
        const energySource = document.getElementById("energySource").value;

        if (cep !== "Não informado") {
            const cepFirstDigit = cep.charAt(0);
            if (cepFirstDigit >= '1' && cepFirstDigit <= '9') {
                regionCounts[cepFirstDigit - 1]++;
                energySourceCounts[cepFirstDigit - 1][energySource]++;
                localStorage.setItem("regionCounts", JSON.stringify(regionCounts));
                localStorage.setItem("energySourceCounts", JSON.stringify(energySourceCounts));
            }
        }

        users.push({ name, address, cep, dateTime, energySource });
        localStorage.setItem("users", JSON.stringify(users));
        renderUsers();
        updateRegionCountTable();
        updateEnergySourceTable();
        userForm.reset();
    });

    renderUsers();
    updateRegionCountTable();
    updateEnergySourceTable();
});
