#include<stdio.h>
int main(){
    int n;
    int i;
    int fac=1;
    printf("Enter a integer: ");
    scanf("%d",&n);
    for ( i=1 ; i<=n ; i++ ){
        fac=fac*i;
    }
    printf("Factorial of %d is %d.",n,fac);
    return 0;
}