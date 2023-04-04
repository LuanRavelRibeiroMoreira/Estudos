
#include <stdio.h>

int main()
{
    //operador matematico
    int a = 10, b = 20;
    float c ;
        printf("A soma %d\n", a+b);
        printf("A subtração %d \n", a-b );
        printf("A multiplicação %d \n", a*b);
        printf("A divisão %d \n", a/b);
        printf("A divisão %f \n", (float) a/b); // (float) esta convertendo as variaveis para float

    c = (float)a;
        printf ("%f \n\n", c);


    //resto da divisão %
    int x = 8;
    
    printf("Resto da divisão inteira %d\n\n", x%2);
    
    
    //operador ++
    
    int z = 10;
        printf("Contador: %d \n", ++z);
    z++;
        printf("contador: %d\n", z);
    z += 1;
        printf("Contador: %d \n", z);
    z = z+1;
        printf("Contador: %d \n", z);
    return 0;
}

