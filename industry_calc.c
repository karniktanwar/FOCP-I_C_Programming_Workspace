#include<stdio.h>
int main(){
    int id;
    float price;
    int quantity;
    float discount;
    printf("Enter the product id: ");
    scanf("%d",&id);
    printf("Enter the price of 1 item: ");
    scanf("%f",&price);
    printf("Enter the quanity: ");
    scanf("%d",&quantity);
    printf("Enter the discount percent: ");
    scanf("%f",&discount);
    float sub_total = price*quantity;
    float discount_amount = sub_total*discount/100;
    float final_amount = sub_total - discount_amount;
    printf("Product ID: %d\n",id);
    printf("=========================\n");
    printf("Total Amount: %0.2f\n",sub_total);
    printf("=========================\n");
    printf("Discount Amount: %0.2f\n",discount_amount);
    printf("=========================\n");
    printf("Final Bill: %0.2f",final_amount);

}