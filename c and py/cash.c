#include <math.h>
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float t;
    do
    { // pegae o trco
          t = get_float("troco: ");
    } //condicao pra aceitar
    while(t < 0);
    int m = t * 100;
     //numero de moedas
    int n = 0;
    while(m > 24)
    {
        n++;
        m= m - 25;
    }
    while(m > 9)
    {
        n++;
        m= m - 10;
    }
    while(m > 4)
    {
        n++;
        m= m - 5;
    }
    while(m > 0)
    {
        n++;
        m= m - 1;
    }
    printf("%i\n", n);
}