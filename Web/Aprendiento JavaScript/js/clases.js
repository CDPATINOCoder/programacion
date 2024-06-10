class Animal {
    constructor(nombre, genero){
        this.nombre = nombre
        this.genero = genero
    }

    saludar () {
        console.log(`Hola soy un animal y me llamo ${this.nombre} y soy ${this.genero}`)
    }
}

class Perro extends Animal {
    constructor(nombre, genero, raza){
        super(nombre, genero)
        this.raza = raza
    }   
    saludar (){
        console.log(`Hola soy un perro me llamo ${this.nombre} y soy ${this.genero}`)
    }
    ladrar (){
        console.log(`Guau Guau`)
    }
}

class Gato extends Animal {
    constructor(nombre, genero, color){
        super(nombre,genero)
        this.color = color
    }

    saludar(){
        console.log(`Hola soy un gato me llamo ${this.nombre} y soy ${this.genero}`)
    }
    maullar (){
        console.log("miauuu")
    }
}


const maylo = new Perro("maylo", "macho", "mestizo")
const lulu = new Perro ("lulu", "macho", "chihuahua")
const michi = new Gato ("michi", "macho", "blanco")
console.log(maylo.nombre)
maylo.saludar()
michi.saludar()
michi.maullar()