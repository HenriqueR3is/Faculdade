// // Exercício 1: Funções de Arrays com JSON
// const veiculos = [
//   { marca: "VolksWagen", modelo: "Golf", ano: 2020, valor: 80000 },
//   { marca: "Chevrolet", modelo: "Onix", ano: 2019, valor: 50000 },
//   { marca: "Yamaha", modelo: "Fazer", ano: 2017, valor: 20000 },
//   // outros veiculos...
// ];

// // Somar o valor total de todos veiculos
// const valorTotal = veiculos.reduce((soma, veiculo) => soma + veiculo.valor, 0);
// console.log(valorTotal);
// // Reduce percorre o array veiculos
// // Soma é o acumulador que começa em 0
// // Veiculo.valor é adicionado ao acumulador soma
// // O resultado final aparece em um console.log

// // Filtrar carros de marca especifica
// const VolksVeiculos = veiculos.filter(
//   (veiculo) => veiculo.marca === "Volkswagen"
// );
// console.log(VolksVeiculos);
// // Filter percorre o array de veiculos
// // Verifica se a marca do veiculo e Volkswagen
// // Retorna um novo array apenas com os veiculos da marca

// // Somar o valor total de todos os veiculos das marcas Chevrolet e Yamaha
// const ChevroletYamahaVeiculos = veiculos.filter(
//   (veiculo) => veiculo.marca === "Chevrolet" || veiculo.marca === "Yamaha"
// );
// const totalValorChevroletYamaha = ChevroletYamahaVeiculos.reduce(
//   (soma, veiculo) => soma + veiculo.valor,
//   0
// );
// console.log(totalValorChevroletYamaha);
// // Filtra os veiculos das marcas selecionadas
// // Usa Reduce para somar os valor dos veiculos

// // Filtrar apenas veiculos mais novos que 2018
// const veiculosNovos = veiculos.filter((veiculo) => veiculo.ano > 2018);
// console.log(veiculosNovos);

//==========================================================================================

// const num = [2, 6, 3, 5, 12, 30, 21, 45, 65, 69, 70, 77, 82, 84, 93, 97, 99];

// let teste = num.filter((n) => n > 45);
// console.log(teste);

// let soma = teste.reduce((soma, num) => soma + num, 0);
// console.log(soma);

// let dobro = num.forEach((num) => console.log(num + 1));

// let filtro = num.filter((n) => n < 45);
// console.log(filtro);

//==========================================================================================

const carros = [
  { marca: "Volkswagen", modelo: "Golf", ano: 2019, valor: 22000 },
  { marca: "Chevrolet", modelo: "Cruze", ano: 2016, valor: 18000 },
  { marca: "Yamaha", modelo: "R1", ano: 2020, valor: 15000 },
  { marca: "Toyota", modelo: "Corolla", ano: 2018, valor: 21000 },
  { marca: "Volkswagen", modelo: "Polo", ano: 2017, valor: 16000 },
];

// const VWcarros = carros.filter((car) => car.marca === "Volkswagen");
// console.log(VWcarros);

// const valorTotal = carros.reduce((soma, carros) => soma + carros.valor, 0);
// console.log(valorTotal);

// const imprime = carros.forEach((carros) => console.log(carros.modelo));

// const dobroValor = carros.map((car) => car.valor * 2);
// console.log(dobroValor);

// const carroDesc = carros.map(
//   (car) =>
//     `marca: ${car.marca}, modelo: ${car.modelo}, ano ${car.ano}, preco ${car.valor}`
// );
// console.log(carroDesc);

const people = ["Alice", "Bob", "Charlie", "David", "Eve"];

const nomeA = people.filter((peop) => peop.startsWith("A"));
console.log(nomeA);
