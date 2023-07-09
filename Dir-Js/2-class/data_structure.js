//data: text, characters
//arrangement of data in an organized manner.
//array, objects

const complexArray = [12, 1.2, 'touch', {'name': 'Topman'}, [2, 3, 5], ['a',  'b', 'c', ['d', 'e', 'f']]];
//console.log(complexArray[5][3][0]);

const book = {
    title: 'Now you see us',
    hasJacket: true,
    pages: 200,
    author: {
	name: 'Lola na',
	married: false,
	qualification: 'Ph.D',
	numOfBooks: 1
    },
    yearsPublished: [
	2017,
	2019,
	2020,
	2022
    ]
}
console.log("Author's name:", book.author.name);

//Class Exercise
//1. Destructure the book title and the name and qualification of the author in the object 'book'
//2. Destructure the nested array at index 5 in 'complexArray'
