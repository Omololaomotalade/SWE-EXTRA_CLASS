function addNumber(a, b) {
  const sum = a + b;
  return sum;
}

// rValue = addNumber(4, 5);
// console.log(rValue);

/*
  Write an arrow function that counts from 1 to any number passed to it as its argument

  e.g; countOneTo(10);
 */
const countNumber = (x) => {
  if (x >= 1) {
    for (let count = 1; count <= x; count++) {
      console.log(count);
    }
  } else {
    console.log("This value is less than one or its not a number");
  }
};

countNumber("b");

exports.countNumber = countNumber;
