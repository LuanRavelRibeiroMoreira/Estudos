
#include <stdio.h>


int main()
{
   //long int  (%li or %ld)
   long int z;
   printf("tamanho em memoria de z um int: %li Bytes\n", sizeof z);
   
   
    //sizeof (tamanho da variavel)
    
    printf("tamanho em memoria de um int: %ld Bytes\n", sizeof (int));
    
    
    //short int
    short int x = 32768;
    int y = 2;
    printf("tamanho em memoria de y um short int: %ld Bytes\n", sizeof y);
    printf("tamanho em memoria de x um int: %ld Bytes\n", sizeof x);


    // float
    float a;
    printf("tamanho em memoria de a um float: %ld Bytes\n", sizeof a);

    //double %lf 
    double b;
    printf("tamanho em memoria de um b double: %ld Bytes\n", sizeof b);

    //print double
    
    double c = 2.123456789123456789;
    printf("Valor de double (C): %f \n", c);
    
    
    long double d = 2.123456789123456789;
    printf("Valor de long double (C): %.12Lf \n", d);


    return 0;
}

