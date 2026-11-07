#include<stdio.h>
int main(){
    printf("Enter the price of Price of 1 item: ");
    float price;
    scanf("%f",&price);
    printf("How many items did you buy? ");
    int item;
    scanf("%d",&item);
    float bill=price*item;
    printf("===========================================\n");
    printf("Your Bill is %0.2f\n",bill);
    printf("===========================================");
    
}