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
    constructor(nombre, genero, color, edad){
        super(nombre,genero)
        this.color = color
        this.edad = null
    }

    static maullar(){
        console.log("Miauuuuuuuuuu")
    }

    get getEdad(){
        return this.edad
    }

    set setEdad(edad){
        this.edad = edad
    }



}

const michi = new Gato("michi", "hembra", "blanco")

Gato.maullar()

console.log(michi.getEdad)

michi.setEdad = "2"
console.log(michi.getEdad)

console.log(michi.nombre, michi.genero, michi.color, michi.edad)


