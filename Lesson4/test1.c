#include <stdio.h>

int main(){
    int option, result ,n1,n2;

    printf("Enter n1 = ");
    scanf("%d",&n1);

    printf("Enter n2 = ");
    scanf("%d",&n2);

    printf("Enter Your Option (We have 4 Option (+ - * /)) : ");
    scanf("%d",&option);

    switch(option)
    {
        //1==1
    case 1:
        result=n1+n2;
        printf("Result n1+n2 = %d\n",result);
        break;
//    2==2
    case 2:
         result=n1-n2;
        printf("Result n1-n2 = %d\n",result);
        break;
    // 3==3
    case 3:
        result=n1*n2;
        printf("Result n1*n2 = %d\n",result);
        break;

     case 4:
        result=n1/n2;
        printf("Result n1/n2 = %d\n",result);
        break;
    // else
    default:
        printf("Error Option...!\n");
        break ;
    }

    return 0;

}
