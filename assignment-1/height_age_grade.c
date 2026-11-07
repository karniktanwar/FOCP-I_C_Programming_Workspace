#include<stdio.h>
int main(){
    printf("Enter the name: ");
    char name[100];
    scanf("%s",name);
    printf("Enter the Height in cm: ");
    float height;
    scanf("%f",&height);
    printf("Enter Grade: ");
    char grade;
    scanf(" %c",&grade);
    printf("====================================\n");
    printf("Student's Name: %s\n",name);
    printf("------------------------------------\n");
    printf("Student's Height: %f\n",height);
    printf("------------------------------------\n");
    printf("Student's Grade: %c\n",grade);
    printf("====================================");
}