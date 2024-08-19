const numbers = [10, 6, 8, 19, 18, 20];

const numbersDouble = numbers.map(double);

function double(element, index, array) {
  return element * 2;
}

console.log(numbers);
console.log(numbersDouble);
