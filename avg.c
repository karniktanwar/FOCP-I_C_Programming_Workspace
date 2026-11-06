#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the values of a,b,c--> ");
    scanf("%d %d %d",&a,&b,&c);
    float avg;
    avg=(a+b+c)/3;
    printf("The average of a, b and c is %0.2f",avg);
}