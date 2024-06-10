function sumar (...numeros)
{
    let resultado = 0;
    for (let i = 0; i < numeros.length; i++)
    {
        resultado += numeros[i];
    }
    console.log(resultado);
}

sumar(1, 2, 3, 4, 5, 6, 7, 8, 9, 10); // 55



function sumar1 (...numeros)
{
    let resultado = 0;
    numeros.forEach(function (numero) {
        resultado += numero;
    });
    console.log(resultado);
}

sumar1(1, 2, 3, 4, 5, 6, 7, 8, 9, 10); // 55


sumar2 = (...numeros) => {
    let resultado = 0;
    numeros.forEach(numero => resultado += numero);
    console.log(resultado);
}

sumar2(1, 2, 3, 4, 5, 6, 7, 8, 9, 10); // 55