#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int l;
    do
    { // pegae numero de linhas
          l = get_int("tamanho: ");
    } //condicao pra aceitar
    while(l > 8 || l < 1);
     //criar pirmaida
    for(int i = 0; i < l; i++)
       {
            for(int j = 0; j < l; j++)
              {//pegar espacos em branco
              if(i + j < l - 1)
               {
                   printf(" ");
               }
               else
               {
                   printf("#");
               }
              }

               printf(" ");

        for(int j = 0; j < l; j++)
        {//pegar espacos em branco
            if(i - j < 0)
            {
                printf(" ");
            }

            else

            {
                printf("#");
            }
        }
        printf("\n");
       }
}