document
  .getElementById("dataForm")
  .addEventListener("submit", function (event) {
    event.preventDefault(); //Evita o envio do formulário

    const data1 = new Date(document.getElementById("data1").value); //Faz a ligação por id com o HTML.
    const data2 = new Date(document.getElementById("data2").value);

    try {
      let maior;
      if (maiorData(data1, data2)) {
        maior = data1;
      } else {
        maior = data2;
      }

      const intervalo = intervaloDatas(data1, data2);
      const atual = dataAtual();

      document.getElementById("resultado").innerHTML = `
            Maior data: ${maior.toLocaleDateString()}<br>
            Intervalo em dias: ${intervalo}<br>
            Data Atual: ${atual}            
        `;

      // Remover a classe de erro, caso exista
      document.getElementById("resultado").classList.remove("error-message");
    } catch (error) {
      // Adicionar a classe de erro e exibir a mensagem de erro
      document.getElementById("resultado").innerHTML = error.message;
      document.getElementById("resultado").classList.add("error-message");
    }
  });

//Funcao para comparar os valores de tempo getTime e retornar o maior.
function maiorData(date1, date2) {
  if (date1.getTime() > date2.getTime()) {
    return true;
  } else {
    return false;
  }
}

//Funcao para calcular o intervalo de duas datas e retornar o intervalo em dias.
function intervaloDatas(date1, date2) {
  if (date1.getTime() > date2.getTime()) {
    throw new Error("O primeiro parametro deve ser mais antigo que o segundo.");
  }

  const diff = date2.getTime() - date1.getTime();
  return diff / (1000 * 60 * 60 * 24);
}

//Funcao para retornar a data atual formatada em hora:minuto - dia/mes/ano.
function dataAtual() {
  const agora = new Date();
  const hora = agora.getHours();
  const minuto = agora.getMinutes();
  const dia = agora.getDate() < 10 ? "0" + agora.getDate() : agora.getDate(); //Verifica se é menor que 10 para adicionar um 0 no formato.
  const mes =
    agora.getMonth() + 1 < 10
      ? "0" + (agora.getMonth() + 1)
      : agora.getMonth() + 1; //+1 porque os meses começam em 0
  const ano = agora.getFullYear();

  return `${hora}:${minuto} - ${dia}/${mes}/${ano}`; //Uso da Template String para retorno da data formatada
}
