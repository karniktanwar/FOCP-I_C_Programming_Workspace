#include<stdio.h>
int main(){
    int a,b,temp;
    a=10;
    b=20;
    printf("Before swapping--> \n");
    printf("a= %d"", b= %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("=======================\n");
    printf("After swapping--> \n");
    printf("a= %d"", b= %d",a,b);
    return 0;
}