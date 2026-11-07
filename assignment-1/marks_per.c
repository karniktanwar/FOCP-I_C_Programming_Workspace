#include<stdio.h>
int main(){
    printf("Enter your Physics Chemistry and Maths marks--> ");
    float p,c,m;
    scanf("%f %f %f",&p,&c,&m);
    printf("==================================\n");
    printf("Physics Score: %f\n",p);
    printf("----------------------------------\n");
    printf("Chemistry Score: %f\n",c);
    printf("----------------------------------\n");
    printf("Maths Score: %f\n",m);
    printf("----------------------------------\n");
    printf("Total marks: %0.2f\n",p+c+m);
    printf("----------------------------------\n");
    printf("Percentage: %0.2f\n",((p+c+m)/300)*100);
    printf("==================================\n");
    return 0;

}