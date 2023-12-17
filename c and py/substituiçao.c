#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//bool check_key_value();

int main(int argc, string argv[])
{
    string kk = argv[1];
    //int nn = strlen(k);
    int nn = strlen(kk);
    int l = 0;
    string k = argv[1];

    for(int f = 0; f < nn; f++)
    {

            if(!isdigit(k[f]))
            {

            }
            else
            {
                l++;
            }
    }
    if((argc == 2) & (l == 0))
    {
        string simples = get_string("texto simples: ");
        int n = strlen(k);
        printf("texto criptografado: ");
        for(int v = 0; v < n-2; v++)
        {
            char sim = simples[v];
            if(isalpha(sim))
            {
                    char m = 'A';
                    if(islower(sim))
                    {
                        m= 'a';
                    }
                    int coe = sim - m;
                    if(islower(sim))
                    {
                        char key = k[coe]+ 32;
                        printf("%c", key);
                    }
                    else
                    {
                        char key = k[coe];
                        printf("%c", key);
                    }

            }
            else
            {
                printf("%c", sim);
            }
        }
        printf("\n");
    }
    else
    {
        printf("use: ./substituiçao key");
    }
}


