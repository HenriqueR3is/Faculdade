//TODOS OS METODOS

//GET (listar todos)

function listarPessoas() {
  parametros = {
    method: "GET",
    headers: {
      "Content-Type": "application/json;charset=utf-8",
    },
  };

  fetch(url, parametros)
    .then((response) => response.json())
    .then((pessoas) => console.log("pessoas", pessoas))
    .catch((err) => console.log("err", err));
}

//GET (por id)

function pessoaPorId(id) {
  parametros = {
    method: "GET",
    headers: {
      "Content-Type": "application/json;charset=utf-8",
    },
  };

  fetch(`${url}/${id}`, parametros)
    .then((response) => response.json())
    .then((pessoa) => console.log("pessoa", pessoa))
    .catch((err) => console.log("err", err));
}

//POST (criar)

function criarPessoa() {
  let nomedapessoa = document.getElementById("nome").value;
  let id = document.getElementById("identificador").value;

  novaPessoa = {
    nome: nomedapessoa,
    id: id,
  };
  parametros = {
    method: "POST",
    headers: {
      "Content-Type": "application/json;charset=utf-8",
    },
    body: JSON.stringify(novaPessoa),
  };

  fetch(url, parametros)
    .then((response) => response.json())
    .then((pessoa) => console.log("pessoa", pessoa))
    .catch((err) => console.log("err", err));
}

//PUT (EDITAR)

function editarPessoa(id) {
  let nomes = document.getElementById("nome").value;
  pessoaEditada = {
    id: `${id}`,
    nome: nomes,
  };
  parametros = {
    method: "PUT",
    headers: {
      "Content-Type": "application/json;charset=utf-8",
    },
    body: JSON.stringify(pessoaEditada),
  };
  fetch(`${url}/${id}`, parametros)
    .then((response) => response.json())
    .then((pessoa) => console.log("pessoa", pessoa))
    .catch((err) => console.log("err", err));
}

//DELETE (excluir)

function excluirPessoa(id) {
  parametros = {
    method: "DELETE",
    headers: {
      "Content-Type": "application/json;charset=utf-8",
    },
  };

  fetch(`${url}/${id}`, parametros)
    .then((response) => response.json())
    .then((pessoa) => console.log("pessoa", pessoa))
    .catch((err) => console.log("err", err));
}

function listarPessoas() {
  fetch(`${url}`)
    .then((response) => {
      console.log("response: ", response);
      return response.json();
    })
    .then((alunos) => {
      console.log("Todos os usuarios: ", alunos);

      const nomes = [];
      alunos.forEach(function (aluno) {
        if ((aluno.notaPrimeiroBim + aluno.notaSegundoBim) / 2 >= 7.0) {
          nomes.push(aluno.nome);
        }
      });

      nomes.sort();
      console.log(nomes);
    })
    .catch((err) => {
      console.log("Erro: ", err);
    });
}



function criarPessoa {
    let nomedapessoa = document.getElementById("nome").value;
    let id = document.getElementById("id").value

    novapessoa {
        nome: nomedapessoa,
        id: id,
    },
    parametros = {
        method: "POST"
        headers: {
            Content-Type: application/json
        },
        body: JSON.stringify(novapessoa)
    };

    fetch(url, parametros)
    .then((response) => response.json())
    .then((pessoa) => console.log(pessoa, pessoa));
    .then((err) => console.log(err, err));
}








function criarPessoa {
    let nomedapessoa = document.getElementById("nome").value;
    let id = document.getElementById("id").value;
    
    novapessoa = {
        nome: nomedapessoa,
        id: id,
    },
    parametros = {
        method: POST
        headers: {
            Content-type: application/json
        },
        body: JSON.stringify(novaPessoa)
    };

    fetch(url, parametros)
    .then((response) => response.json())
    .then((pessoa) => console.log(pessoa, pessoa));
    .then((err) => console.log(err, err));
}
























