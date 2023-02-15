#include <stdio.h>

void roman2arabic(char input[],char output[])
{  
   int i,j;
   for (i = 0,j = 0; input[i] != '\0'; i++,j++){
      if( input[j] == 'I' || input[j] == 'i' ){
         if (input[j+1] == 'I' ){
            j++;
            if (input[j+1] == 'I'){
               output[i] = '3';
               j++;
            }else{
               output[i] = '2';
            }
         }else if (input[j+1] == 'V'){
            output[i] = '4';
            j++;       
         }else if (input[j+1] == 'X'){
            output[i] = '9';
            j++; 
         }else{
            output[i] = '1';
         }
      }else if(input[j] == 'V'){
         if (input[j+1] == 'I'){
            j++;
            output[i] = '6';
            if (input[j+1] == 'I'){
               j++;
               output[i] = '7';
               if (input[j+1] == 'I'){
                  output[i] = '8';
                  j++;
               }
            }
         }else{
            output[i] = '5';
         }
      }else{
         output[i] = input[j];
      }
   } 
   output[i] = '\0';
}

int main()
{  char input[80],output[80];

   printf(" Input: ");
   gets(input);  /* read a line of characters from the input to "input" variable */

   roman2arabic(input,output);
   printf("Output: %s\n",output);

   return 0;
}