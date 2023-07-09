//console.log(name);

/*
   var name;
   console.log(name);
   name = 'Topman';
*/
/*
function changeName() {
    var name = 'Lola';
    return name;
}

console.log(name);

var rval = changeName();
console.log(rval);
*/

function count(from, to) {
    while (from <= to) {
	console.log(from);
	from += 1;
    }
    message = `Counted ${from} to ${to}...`;
    return message;
}

count(1, 10);

