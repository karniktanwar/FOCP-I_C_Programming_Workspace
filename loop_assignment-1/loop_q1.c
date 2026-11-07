#include<stdio.h>
#include<math.h>
int main(){
    int n;
    int i;
    int sum=0;
    printf("Enter a integer: ");
    scanf("%d",&n);
    for (i=1 ; i<=n ; i++){
        sum = sum + i*i;
    }
    printf("Sum of the series: %d",sum);
    return 0;
}