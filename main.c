#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
   int * l1  = calloc (4 * sizeof(int));

   int * l2  = calloc (16 * sizeof(int));

   int * l3  = calloc (96 * sizeof(int));

   int * ram = calloc (960000 * sizeof(int));


   int temp = 0;
   int loop_close = 1;
   int total_input = 0;
   int tmp96, tmp16, tmp4;

   while( loop_close ){

      printf("please enter input\n");
      scanf("%d",&temp);
      total_input++;

      if( total_input > 960000){
         printf("data overflow error\n");
         return -1;
      }

      if( ! (total_input % 96) ){

         tmp96 = total_input ÷ 96 - 1;

         for(int i = 0; i < 96; i++){
            ram[i + tmp96 * 96] = l3[i];
         }


      }



      printf("If no more input please press 0, else press 1\n");
      scanf("%d",&loop_close);

   }
    




   return 0;
}
