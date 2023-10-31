

 // grade>=90 && grade <=100 -> grade "A"
 // grade >= 80 && grade <= 89 -> grade "B"
 // grade >= 70 && grade <= 79 -> grade "C"
 // grade >= 60 && grade <=69 -> grade "D"
 // grade <60 -> grade "F"


#include <stdio.h>

int main(){

   int grade;

   printf("Enter Your Grade : ");
   scanf("%d",&grade);

   if(grade>=90 && grade<=100){
        printf("Grade A...!\n");

   }else if(grade >= 80 && grade<=89){
       printf("Grade B...!\n");

   }else if (grade >= 70 && grade <= 79){
       printf("Grade C...!\n");

   }else if(grade >= 60 && grade <=69) {
        printf("Grade D...!\n");

   }else{
       printf("Grade F...!\n");
   }

    getch();
    return 0;
}


