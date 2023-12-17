#include <stdio.h>
#include <cs50.h>

int main(void)
{
   int x = get_int("x: ");

   int y = get_int("y: ");

   if (x < y)
   {
      printf("x e menor que y\n");
   }
   else if (x > y)
   {
      printf("x e maior que y\n");
   }
   else
   {
      printf("x igual a y\n");
   }
}
