class Car {
    constructor(model, colour, engine_no){
	this.model = model;
	this.colour = colour;
	this.engine_no = engine_no;
    }
}

const lolaCar = new Car('Toyota-A24', 'grey', 9241);

console.log(lolaCar.colour);

/* SAME THING IN PYTHON
class Car:
    def __init__(self, model, colour, engine_no):
        self.model = model
        self.colour = colour
        self.engine_no = engine_no

lola_car = Car('Toyota-A24', 'grey', 9241)

print(lola_car.colour)
*/
