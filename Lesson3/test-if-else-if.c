
//grade >=90 && grade <=100 --> print grade "A"
//grade >= 80 && grade <=89 --> print grade "B"
//grade >= 70 && grade <=79 --> print grade "C"
//grade >= 60 && grade <=69 -->print grade "D"
//grade <60 --> print grade "F"

#include <stdio.h>

int main(){
    int grade;

    printf("Enter Your Grade = ");
    scanf("%d",&grade);

    if(grade>=90 && grade <= 100){
        printf("Print Grade A...!\n");
    }
    else if (grade >= 80 && grade <= 89){
        printf("Print Grade B...!\n");
    }
    else if (grade>=70 && grade <=79){
        printf("Print Grade C...!\n");
    }
    else if (grade >= 60 && grade <=69){
        printf("Print Grade D...!\n");
    }
    //grade <60 --> print grade "F"
    else{
        printf("Print Grade F...!\n");
    }
    getch();
    return 0;
}
