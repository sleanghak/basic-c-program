#include <stdio.h>
int main(){
    float payment,discount;

    printf("Enter Your Payment (USD) : ");
    scanf("%f",&payment);

    if(payment<=20){
        discount=payment*0.03;

    }else if(payment<=40){
        discount= payment*0.05;

    }else{
        discount=payment*0.1;
    }

    printf("Payment = %.2f USD\n",payment);
    printf("Discount = %.2f USD\n",discount);

    getch();
    return 0;
}
