const formPedido = document.getElementById('formPedido');
const pedidosContainer = document.getElementById('pedidos');
let pedidos = []; // array lista []

formPedido.addEventListener('submit', function(e) {
  e.preventDefault();
  const nome = document.getElementById('nome').value;
  const hamburguer = document.getElementById('hamburguer').value;
  const quantidade = document.getElementById('quantidade').value;

  const pedido = {
    id: Date.now(),
    nome,
    hamburguer,
    quantidade
  };

  pedidos.push(pedido);
  renderPedidos();
  formPedido.reset();
});

function renderPedidos() {
  pedidosContainer.innerHTML = '';
  pedidos.forEach(pedido => {
    const pedidoElemento = document.createElement('div');
    pedidoElemento.classList.add('pedido');
    pedidoElemento.innerHTML = `
      <h3>${pedido.nome}</h3>
      <p>Hamburguer: ${pedido.hamburguer}</p>
      <p>Quantidade: ${pedido.quantidade}</p>
      <button class="editar-btn" onclick="editarPedido(${pedido.id})">Editar</button>
      <button onclick="excluirPedido(${pedido.id})">Excluir</button>
    `;
    pedidosContainer.appendChild(pedidoElemento);
  });
}

function excluirPedido(id) {
  pedidos = pedidos.filter(pedido => pedido.id !== id);
  renderPedidos();
}

function editarPedido(id) {
  const pedidoParaEditar = pedidos.find(pedido => pedido.id === id);
  if (!pedidoParaEditar) return;

  const novoNome = prompt('Digite o novo nome:', pedidoParaEditar.nome);
  const novoHamburguer = prompt('Digite o novo hamburguer:', pedidoParaEditar.hamburguer);
  const novaQuantidade = prompt('Digite a nova quantidade:', pedidoParaEditar.quantidade);

  if (novoNome && novoHamburguer && novaQuantidade) {
    pedidoParaEditar.nome = novoNome;
    pedidoParaEditar.hamburguer = novoHamburguer;
    pedidoParaEditar.quantidade = novaQuantidade;
    renderPedidos();
  }
}





// let meninosCasa = []

// meninosCasa.push({
//   name: "Davi",
//   idade: 20
// })


// meninosCasa.push({
//   name: "Eli",
//   idade: 19
// })

// meninosCasa.map((menino)=> menino.idade += 10)