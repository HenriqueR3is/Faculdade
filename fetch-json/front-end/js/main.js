const numeros = [1,2,5,6,78,4,34,56];

const nomeLindo = "Henrique";

const NewNick = nomeLindo.slice(1,4)

RETIRA O ULTIMO NUMERO
numeros.pop()

ADICIONA O ULTIMO NUMERO "parametro condiz o numero"
numeros.push(133);


ADICIONA/REMOVE/TROCA
PRIMEIRO === POSIÇÃO
SEGUNDO === 0, ELE NAO REMOVE, COLOCA NA POSIÇÃO, 1 ELE TROCA A POSIÇÃO REVOMENDO
TERCEIRO === O VALOR QUE DESEJA
numeros.splice(1,0,12)


console.log(NewNick);
console.log(numeros);
console.log(numeros.sort()); 

///////////////////////////////////////////////////////////////////////////////


const veiculos = [
    { marca: 'Volkswagen', modelo: 'Golf', ano: 2019, preco: 22000 },
    { marca: 'Chevrolet', modelo: 'Cruze', ano: 2016, preco: 18000 },
    { marca: 'Yamaha', modelo: 'R1', ano: 2020, preco: 15000 },
    { marca: 'Toyota', modelo: 'Corolla', ano: 2018, preco: 21000 },
    { marca: 'Volkswagen', modelo: 'Polo', ano: 2017, preco: 16000 }
];



///////////////////////////////////////////////////////////////////////////////
const VeiculosVolks = veiculos.filter(cars => cars.marca === 'Volkswagen')

console.log(VeiculosVolks);



///////////////////////////////////////////////////////////////////////////////

const veiculosNovos = veiculos.filter(cars => cars.ano > 2017)

console.log(veiculosNovos);



///////////////////////////////////////////////////////////////////////////////

const veiculosNovos = veiculos.filter(cars => cars.preco > 16000)

console.log(veiculosNovos);



///////////////////////////////////////////////////////////////////////////////
const TodosVeiculos = [];

veiculos.forEach(cars => {
    TodosVeiculos.push(cars.marca)
});


console.log(TodosVeiculos);
TodosVeiculos.sort()
console.log(TodosVeiculos);