const numeros = [0,1,2,3,4,5,6,7,8,9]

for (let i = 0; i < numeros.length; i++)
    {
    if (numeros[i] % 2 !== 0) 
        {
            continue;
        }
        console.log(numeros[i])
    }   
