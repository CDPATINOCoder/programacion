 #include<stdio.h>
 int main()
 {
    int a;
    int b;
    printf("ingrese el primer numero positivo: ");
    scanf("%d", &a);
    printf("ingrese el segundo numero positivo: ");
    scanf("%d", &b);

    if(a==b)
    {
        printf("son iguales\n");
    }
    else
    {
        printf("%d es distinto de %d\n", a, b);
    }

    if(a>b)
    {
        printf("%d es mayor que %d\n", a , b);
    }
    
    if(b>a)
    {
        printf("%d es mayor que %d\n", b , a);
    }


    if(a%b==0)
    {
        printf("%d es multiplo %d\n", b , a);
    }
    else
    {
        printf("%d no es multiplo %d\n", b , a);
    }

    if(b%a==0)
    {
        printf("%d es multiplo %d\n", a , b);
    }
    else
    {
        printf("%d no es multiplo %d\n", a , b);
    }
    return 0;
 }
 