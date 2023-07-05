//Operators: arithmetic, logical, assignment, comparison

//Control flow: if-else, loops, for loop, while loop, foreach, ternary operator, try-catch
/*
for (no = 1; no <= 10; no++) {
    if (no % 2 != 0) {
	console.log(no + ' ');
    }
}
*/
/*
var name = 'lola1';
var aboutName = name.length > 5 ? 'the name has more than 5 letters' : 'the name has less than 5 letters'

console.log(aboutName);
//general syntax: condition ? return value : return value
*/
no1 = 5;
no2 = 5;
var result = no1 > no2 ? 'greater' : no1 == no2 ? 'equal' : 'lesser'
console.log('result: ', result);

if (no1 > no2) {
    result2 = 'greater';
} else if (no1 == no2) {
    result2 = 'equal';
} else {
    result2 = 'lesser';
}
console.log('result2: ', result2);


//Assignment:
/*
1. Use foreach loop to produce the same result as the for loop above
2. Demonstrate the use of try-catch
*/
