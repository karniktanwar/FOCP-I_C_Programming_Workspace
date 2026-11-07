#include<stdio.h>
#include<math.h>
int main(){
    int i;
    int a,n,r;
    int sum=0;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter the common ratio: ");
    scanf("%d",&r);
    printf("Enter an integer n: ");
    scanf("%d",&n);
    for ( i=1 ; i<=n ; i++ ){
        sum = sum + a*pow(r,i-1);
    }
    printf("Sum of Geometric series: %d",sum);
    return 0;
    }