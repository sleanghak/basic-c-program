#include <stdio.h>


int main(){
    int option,num1,num2,result;

    printf("Enter The Number1 = ");
    scanf("%d",&num1);

    printf("Enter The Number2 = ");
    scanf("%d",&num2);

    printf("Enter Option (1->4) : ");
    scanf("%d",&option);


    switch(option){
     // 1==1
    case 1:
        result = num1+num2;
        printf("The result = %d\n",result);
        break;
     // 2==2
    case 2:
       result = num1-num2;
        printf("The result = %d\n",result);
        break;
        //3==3
    case 3:
       result = num1*num2;
        printf("The result = %d\n",result);
        break;
           //3==3
    case 4:
       result = num1/num2;
        printf("The result = %d\n",result);
        break;

     // else
    default:
            printf("Error! option is not correct\n");
    }

    return 0;
}



// -> 1 operator +
// -> 2 operator -
// -> 3 operator *
// -> 4 operator /
// -> 5 print : Error operator...!
