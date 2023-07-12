/*
//normal function
function addNumber(a, b) {
  const sum = a + b;
  return sum;
}

rValue = addNumber(4, 5);
console.log(rValue);
*/

/*
//callback function
(function addNumber(a, b) {
  const sum = a + b;
  console.log(sum);
})(6, 4);
*/

/*
//anonymous function: callback is necessary here
(function (x, y) {
  const sum = x + y;
  console.log(sum);
})(10, 5);
*/

//arrow function: anonymous as well and must either be called back,  or saved in a variable, or used
//as a function's argument or used as a function's return value
console.log(((x, y) => x + y)(12, 8));

