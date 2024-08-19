const numbers = [10, 6, 8, 19, 18, 20];

numbers.forEach(printNumber);

function printNumber(value, index, array) {
  console.log(`Index: ${index} Value: ${value}`);
}
