#include<stdio.h>
int main(){
    int c,f;
    printf("Enter the temperature in celsius-->  ");
    scanf("%d %f ", &c, &f);
    f= (1.8*c+32);
    printf("The temperature in fahrenheit is %0.2f",f);
    return 0;
    
}