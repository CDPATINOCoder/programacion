let fechaDeNacimiento = new Date(2004, 2, 27);
let fechaActual = new Date();
let edad = fechaActual.getFullYear() - fechaDeNacimiento.getFullYear();
let mes = fechaActual.getMonth() - fechaDeNacimiento.getMonth();
let dia = fechaActual.getDate() - fechaDeNacimiento.getDate();
