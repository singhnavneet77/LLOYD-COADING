#include<stdio.h>
#include<string.h>
int digit(char c){

    int value=0;

    switch(c){
         case 'I':
         value = 1;
         break;
         case 'V':
          value = 5;
          break;
         case 'X':
         value = 10;
         break;
         case 'L':
         value = 50;
         break;
         case 'C':
         value = 100;
         break;
         case 'D':
         value = 500;
         break;
         case 'M':
         value = 1000;
          break;
         case '\0':
         value = 0;
         break;
         default:
         value = -1;
    }

    return value;
}
int main(){

    char roman[100];
    int i=0;
    long int n =0;

    printf("Enter any roman number :");
    scanf("%s",roman);
    while(roman[i]){
         if(digit(roman[i]) < 0){
             printf("Invalid roman : %c",roman[i]);
             return 0;
         }

         //if((strlen(roman)-i) > 2){
             if(digit(roman[i]) < digit(roman[i+2])){
                 printf("Invalid roman number");
                 return 0;
             }
        // }

         if(digit(roman[i])>=digit(roman[i+1]))
             n=n + digit(roman[i]);
         else{
             n = n+ (digit(roman[i+1]) - digit(roman[i]));
             i++;
         }
         i++;
    }

    printf("%ld",n);

    return 0;

}
