#include <stdio.h>



void Hello(){
    int a,b,r;

    printf("enter number a : ");
    scanf("%d",&a);
    printf("enter number b : ");
    scanf("%d",&b);

    r=a+b;

    return r;
}


int main(){
    int result1;

    //function call
    result1=Hello();

    printf("%d",result1);




    return 0;
}

