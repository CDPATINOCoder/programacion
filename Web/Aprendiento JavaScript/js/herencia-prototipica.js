function Animal(nombre, genero){
    this.nombre = nombre
    this.genero = genero
}

Animal.prototype.saludar = function () {
    console.log(`Hola yo soy ${this.nombre} y soy ${this.genero}`)
}



function Perro(nombre, genero, raza){
    this.raza = raza
    this.llamar = Animal
    this.llamar(nombre,genero)
}

Perro.prototype = new Animal()
Perro.prototype.constructor = Perro

Perro.prototype.ladrar = function (){
    console.log("guau guau")
}

const maylo = new Perro("maylo", "macho", "mestizo")
const lulu = new Perro("lulu", "macho", "chihuahua")

function Gato (nombre, genero, color){
    this.color = color
    this.llamar = Animal
    this.llamar(nombre,genero)
}

Gato.prototype = new Animal()
Gato.prototype.constructor = Gato

Gato.prototype.maullar = function (){
    console.log("miauu")
}

const michi = new Gato("michi", "macho", "blanco")

console.log(lulu.nombre)
console.log(lulu.genero)   
console.log(lulu.raza) 
lulu.saludar()
lulu.ladrar()
console.log(maylo.nombre)
console.log(maylo.genero) 
console.log(maylo.raza)   
maylo.saludar()
maylo.ladrar()
console.log(michi.nombre)
console.log(michi.genero)   
console.log(michi.color) 
michi.saludar()
michi.maullar()


