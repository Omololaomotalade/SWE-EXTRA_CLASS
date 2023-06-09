/*
1. Declare a variable that houses each of the names and ages of the siblings in one index

For exmaple, if I do console.log(infoOfSiblings[1]), it should print the name and age of the
first sibling


2. Explain and demonstrate any 10 JavaScript array methods

3. Create an immutable object, i.e, an object whose property cannot be changed
*/

let namesAge = [
  {
    name: "Lola",
    age: 12,
  },
  {
    name: "Seun",
    age: 11,
  },

  { name: "Dara", age: 9 },
];
// 1. Declaring an  array
let namesAge2 = {
  name: "Jola",
  age: 18,
};
console.log(namesAge[0]);

// 2.Array Methods
//string
let stringName = namesAge.toString();
console.log(stringName);

//Join
let joinName = namesAge.join(" and ");
console.log(joinName);

//concat
let nameConcat = namesAge.concat(namesAge2);

console.log(nameConcat);

// Delete an element in the array
nameConcat.splice(1, 1);
console.log(nameConcat);

let namesCopy = [...namesAge];

console.log(namesCopy);

//Slice - gives u a new array of the element selected
let slice = namesCopy.slice(1, 3);

console.log(slice);

// 3. Immutable
Object.freeze(slice);
console.log(slice);
let slicew = namesCopy.slice(1, 3);
console.log(slicew);

// Write a function that takes variable numbers and add them
function addNumber(a, b) {
  console.log(a + b);
}

addNumber(5, 4);
