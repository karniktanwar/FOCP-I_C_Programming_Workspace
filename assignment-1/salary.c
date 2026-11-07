#include<stdio.h>
int main(){
    printf("Enter the Salary: ");
    float salary;
    scanf("%f",&salary);
    printf("Enter Monthly Allowance: ");
    float allowance;
    scanf("%f",&allowance);
    printf("Enter Diwali Bonus: ");
    float bonus;
    scanf("%f",&bonus);
    printf("EMployee's Monthly Salary is %.2f",salary+allowance+bonus);
    return 0;

}