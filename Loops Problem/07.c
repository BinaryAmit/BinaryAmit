#include <stdio.h>

int main()
{
   for (int i = 2; i <= 50; i++)
   { 
      int count = 0;
      for (int j = 2; j < i; j++)
      {
         // int count = 0;
         if (i % j == 0)
         {
            count++;
         }
         
      }
      if (count == 0)
         {
            printf("%d ", i);
         }
   }

   return 0;
}
