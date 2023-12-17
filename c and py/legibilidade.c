#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("texto:");

    int l = 0; int n = strlen(s); int p = 1; int f = 0;
    for(int i=0; i < n  ;i++)
    {
    if((s[i] > 64) & (s[i] < 91) || (s[i] > 96) & (s[i] < 123))
    {
        l++;
    }
    else if(s[i] == 32)
    {
        p++;
    }
    else if(s[i] == 63 || s[i] == 46 || s[i] == 33)
    {
        f++;
    }
    }
    float L = 0; float F;
    L = (100 * l) / p;
    F = (100 * f) / p;
    int indice;
    indice = 0.0588 * L - 0.296 * F - 15.8;
       printf("grade %i\n", indice);
}