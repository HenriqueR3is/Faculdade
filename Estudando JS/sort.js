const numbers = [5, 4, 3, 2, 1];

numbers.sort((a, b) => {
  if (a < b) return -1;
});

console.log(numbers);
