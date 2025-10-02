//simple C programprompt user input
/*
 Name:Amani Munga Tunje
 Reg:CT100/G/26225/25
 Dicription:C program prompt user input
 */
#include <stdio.h>

//main function
int main() {
  //variable diclaration
   int height;
   int number;
   float weight;    
    
 //prompt user to enter height
    printf("Enter your height\t");
    scanf("%d",&height);
  
  //prompt user to enter phone number
    printf("\nEnter your phone number\t");
    scanf("%d",&number);
    
  //prompt user to enter weight
    printf("\nEnter your weight\t");
    scanf("%f",&weight);
    
 //output to be display   
    printf("%d \n",height);
    printf("%d\n",number);
    printf("%f",weight);
    return 0;
}