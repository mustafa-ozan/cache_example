#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
   int * l1  = calloc (4 * sizeof(int));

   int * l2  = calloc (16 * sizeof(int));

   int * l3  = calloc (96 * sizeof(int));

   int * ram = calloc (100000 * sizeof(int));

   return 0;
}
