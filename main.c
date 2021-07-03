#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
   int * l1  = calloc (4 * sizeof(int));

   int * l2  = calloc (16 * sizeof(int));

   int * l3  = calloc (96 * sizeof(int));

   int * ram = calloc (100000 * sizeof(int));


   int temp = 0;
   int loop_close = 1;

   while( loop_close ){

      printf("please enter input\n");
      scanf("%d",&temp);

      printf("If no more input please press 0, else press 1\n");
      scanf("%d",&loop_close);

      

   }
    




   return 0;
}
