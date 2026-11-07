#include<stdio.h>
int main(){
    int num,n;
    int count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    n = num;
    if ( num < 0 ) {
        num = -num;
    }
    if ( num == 0 ){
        count = 1;
    }
    else { while ( num!=0 ){
        num = num/10;
        count++;
    }
    
    }
    printf("Total number of digits in %d is %d", n, count);
    return 0;

}