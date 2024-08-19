let listaDeCompras = [];
let indiceEdicao = -1;

function limpaCampos() {
  document.getElementById("item").value = "";
  document.getElementById("valor").value = "";
}

function salvar() {
  let item = document.getElementById("item").value;
  let valor = document.getElementById("valor").value;

  //validacoes de campos

  if (indiceEdicao >= 0) {
    let obj = listaDeCompras[indiceEdicao];
    obj.item = item;
    obj.valor = valor;
  } else {
    listaDeCompras.push({ item: item, valor: valor });
  }

  limpaCampos();
  atualizarTabela();

  indiceEdicao = -1;
}

function editarItem(indice) {
  indiceEdicao = indice;
  let obj = listaDeCompras[indice];

  document.getElementById("item").value = obj.item;
  document.getElementById("valor").value = obj.valor;
}

function excluirItem(indice) {
  let obj = listaDeCompras[indice];

  if (confirm(`Tem certeza que deseja excluir o item ${obj.item}`)) {
    listaDeCompras.splice(indice, 1);
    atualizarTabela();
  }
}

function somaTotal() {
  return listaDeCompras
    .map((i) => Number.parseFloat(i.valor))
    .reduce((acumulador, valorItem) => acumulador + valorItem, 0);
}

function imprimeValor() {
  console.log(somaTotal());

  let valorTotal = document.getElementById("valor-total");
  valorTotal.innerHTML = "";
  valorTotal.innerHTML = `R$ ${somaTotal()}`;
}

function atualizarTabela() {
  let tableBody = document.getElementById("table-body");
  tableBody.innerHTML = "";

  listaDeCompras.forEach((i, indice) => {
    let tr = document.createElement("tr");

    tr.innerHTML = `
        <td> ${i.item} </td>
        <td>R$ ${i.valor} </td>
        <td>
            <button
                type="button"
                onclick="editarItem(${indice})"
                class="material-symbols-outlined btn-icone">edit
            </button>

            <button 
                type="button"
                onclick="excluirItem(${indice})"
                class="material-symbols-outlined btn-icone">delete
            </button>

        </td>    
        `;

    tableBody.append(tr);
  });

  imprimeValor();
}
