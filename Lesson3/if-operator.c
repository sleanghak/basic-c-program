


// number >= 1
// operator "+"

// number >=2
// operator "-"

//number >=3
//operator "*"

//number >=4
// operator "/"


#include <stdio.h>

int main(){
    int a,b,c,number;
    a=5;
    b=5;

    printf("Enter Number Operator 1-4 : ");
    scanf("%d",&number);

    if(number == 1){
        c=a+b;
        printf("The Result C = A+B = %d\n",c);
    }
    else if(number == 2){
          c=a-b;
         printf("The Result C = A-B = %d\n",c);
    }
    else if(number == 3){
          c=a*b;
         printf("The Result C = A*B = %d\n",c);
    }

    //number >=4
    // operator "/"
    else{
         c=a/b;
         printf("The Result C = A/B = %d\n",c);
    }


    return 0;
}
