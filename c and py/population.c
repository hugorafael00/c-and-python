#include <math.h>
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int pi;
    do
    { // populaçaao inicial
          pi = get_int("populaçao inicial: ");
    } //condicao pra aceitar
    while(pi < 9);
    int pf;
    do
    { // populaçaao final
          pf = get_int("populaçao final: ");
    } //condicao pra aceitar
    while(pf < pi);

    int a=0; int n;
       for(n = pi; n < pf;)
       {
           n= n +(n/3)-(n/4);
           a++;
       }
    printf("anos: %i\n", a);

}

include <stdio.h>
include <cs50>

int main (void)
{
    a = get_string("texto: ")

}