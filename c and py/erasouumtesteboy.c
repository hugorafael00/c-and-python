#include <stdio.h>
#include <cs50.h>

int get_height();

int main(void)
{
    int height = get_height();

    while (height < 1 || height > 8)
    {
    height = get_height();
    }
    int counter = 1;

    while(counter <= height)
    {
       int spaces = height - counter;

       for (int i = 0; i < spaces; i++)
       {
           printf(" ");
       }

       for (int i = 0; i < counter; i++)
       {
           printf("#");
       }
       printf(" ");
        for(int i = 0; i < height; i++)
           {
            for(int j = 0; j < height; j++)
              {//pegar espacos em branco
              if(i + j < l - 1)
               {
                   printf(".");
               }

               else

               {
                   printf("#");
               }
              }





             for(int j = 0; j < height; j++)
              {//pegar espacos em branco
              if(i - j < 0)
               {
                   printf(".");
               }

               else

               {
                   printf("#");
               }
              }
        printf("\n");
       }
     }
}
int get_height()
{
    return get_int("Height: ");
}