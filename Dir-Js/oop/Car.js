class Car {
    plateNumber = 001
    constructor(owner, model, colour, engine_no){
	this.owner = owner;
        this.model = model;
        this.colour = colour;
        this.engine_no = engine_no;
	const info = `The ${this.colour} ${this.model} car belongs to ${this.owner}`;
	this.info = info;
	this.plateNumber = plateNumber;
    }
/*
    function registerCar() {
	
    }*/
}

const lolaCar = new Car('Lola', 'Toyota-A24', 'grey', 9241);


//console.log(lolaCar.info);
//console.log(lolaCar.info);
//console.log(lolaCar.info);
console.log(lolaCar.plateNumber);
