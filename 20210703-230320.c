#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
   int * l1  = (int *) calloc (4, sizeof(int));
   int * l2  = (int *) calloc (8, sizeof(int));
   int * l3  = (int *) calloc (16, sizeof(int));
   int * ram = (int *) calloc (960, sizeof(int));

   int temp = 0;
   int loop_close = 1;
   int total_input = 0;
   int tmp16, tmp8, tmp4;

   while( loop_close ){

      printf("please enter input\n");
      scanf("%d",&temp);
      printf("entered input is %d\n", temp);
      total_input++;

      if( total_input > 960){
         printf("data overflow error\n");
         return -1;
      }
  
      if( (total_input % 4))
         l1[total_input % 4 - 1] = temp;


      if( ! (total_input % 4) ){
    
         l1[3] = temp;

         if( ! (total_input % 8) )
            tmp4 = 1;

         else
            tmp4 = 0;       

         for(int i = 0; i < 4; i++){
            l2[i + tmp4 * 4] = l1[i];
         }
       }


       if( ! (total_input % 8) ){

         if( ! (total_input % 16) )
            tmp8 = 1;

         else
            tmp8 = 0;       

         for(int i = 0; i < 8; i++){
            l3[i + tmp8 * 8] = l2[i];
         }

       }

      if( ! (total_input % 16) ){

         tmp16 = total_input / 16 - 1;

         for(int i = 0; i < 16; i++){
            ram[i + tmp16 * 16] = l3[i];
         }
      }

      printf("If no more input please press 0, else press 1\n");
      scanf("%d",&loop_close);
      printf("loop choice is %d\n", loop_close);
   }
    
   printf("l3 cache\n");
   for(int i = 0; i < 16; i++){
      printf("%d ", l3[i]);
   }
   printf("\n");

   printf("l2 cache\n");
   for(int i = 0; i < 8; i++){
      printf("%d ", l2[i]);
   }
   printf("\n");

   printf("l1 cache\n");
   for(int i = 0; i < 4; i++){
      printf("%d ", l1[i]);
   }
   printf("\n");

   return 0;
}
