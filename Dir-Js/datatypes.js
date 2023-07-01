/*
Some DATATYPES IN JavaScript
Boolean
Number
String
Array
Object

No discremination between int & float, they're all numbers in js
*/

// Number in js
var digit = 24;
var secondDigit = 30.5;
// console.log(digit, secondDigit);
// console.log(typeof(digit));
// console.log(typeof(secondDigit));

// Strings in js
var fullName = "Omolola Omotalade";
var shortFormOfName = 'Lola';
var singleLetter = 'c';

// console.log(fullName, shortFormOfName);
// console.log(typeof(fullName));
// console.log(typeof(singleLetter));

// Array in js
var agesOfTheSiblings = [15, 12, 13, 14, 11, 10, 16];
var namesOfTheSiblings = ["John", "James", "Amadu", "Lionel", "Fedrieck", "Happiness", "Jack"];
var multiDataArray = [12, 1.00, "abc", "123"];

// console.log(agesOfTheSiblings);
// console.log(multiDataArray);
// console.log("Before: ", namesOfTheSiblings[3]);
// console.log("Before: ", namesOfTheSiblings);
// namesOfTheSiblings[3] = "David";
// console.log("After: ", namesOfTheSiblings[3]);
// console.log("After: ", namesOfTheSiblings);

// var newVariable;
// console.log(newVariable);

// console.log("Check => ", namesOfTheSiblings[7]);
namesOfTheSiblings[9] = "Zion";
console.log(namesOfTheSiblings);


// Object as JavaScript datatype [object has properties, they occur in name-value pairs]
var cup = {
    colour: "skyblue",
    hasAHandle: true,
    size: 50
}
// console.log(typeof(agesOfTheSiblings));