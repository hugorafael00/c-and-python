#include <math.h>
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long n;
    do
    { // numero do cartao
          n = get_long("numero: ");
    }
    while(n < 99999999999);
    int v;int m; int g; int h; int i; int j; int k; int o; int somarene; int cartao; int q; int r; int s; int t; int u; int z; int x; int y;

    {//vverificcaçao de luhn
        v = n % 100;
        v = v / 10;
        v = v * 2;
        m = n % 10000;
        m = m / 1000;
        m = m * 2;
        g = n % 1000000;
        g = g / 100000;
        g = g * 2;
        h = n % 100000000;
        h = h / 10000000;
        h = h * 2;
        i = n % 10000000000;
        i = i / 1000000000;
        i = i * 2;
        j = n % 1000000000000;
        j = j / 100000000000;
        j = j * 2;
        k = n % 100000000000000;
        k = k / 10000000000000;
        k = k * 2;
        o = n % 10000000000000000;
        o = o / 1000000000000000;
        o = o * 2;
        q = n % 10;
        q = q / 1;
        r = n % 1000;
        r = r / 100;
        s = n % 100000;
        s = s / 10000;
        t = n % 10000000;
        t = t / 1000000;
        u = n % 1000000000;
        u = u / 100000000;
        z = n % 100000000000;
        z = z / 10000000000;
        x = n % 10000000000000;
        x = x / 1000000000000;
        y = n % 1000000000000000;
        y = y / 100000000000000;

        somarene = v + m + g + h + i + j + k + o;
        cartao = somarene + q + r + s + t + u + z + x + y;
    }


    if(cartao > 0 || cartao < 0)
    {
        if(n / 1000000000000 == 4 || n / 1000000000000000 == 4)
        {
            printf("visa\n");
        }
        else if((n > 999999999999999) & (n / 100000000000000 == (51 |  55) ))
        {
            printf("mastercard\n");
        }
        else if(n > 99999999999999 & n < 1000000000000000)
        {
            printf("amex\n");
        }
    }
    else
    {
        printf("invalido\n");
    }

    //printf("%i\n", v);
}
