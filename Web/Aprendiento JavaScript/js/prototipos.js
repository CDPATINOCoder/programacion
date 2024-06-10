function persona(nombre, edad) {
    this.nombre = nombre;
    this.edad = edad;

}
persona.prototype.saludar = function () {
    console.log(`Hola soy ${this.nombre} y tengo ${this.edad} años`);
}

const juan = new persona("Juan", 23), 
maria = new persona("Maria", 24);

console.log(juan, maria)

juan.saludar();
maria.saludar()


const saludar = function ()
{    
    console.log("hola")
}
saludar()

function saludar1 ()
{
    console.log("hola1")
}
saludar1()

const saludar2 = () => {
    console.log("hola2")
}
saludar2()