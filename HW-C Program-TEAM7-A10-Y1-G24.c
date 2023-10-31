#include <stdio.h>
#define CHARACTER 16
#include <string.h>
#include <conio.h>
#include <stdlib.h>


typedef struct
{
    int id;
    char name[40];
    char sex[20];
    int score;
} student;

void swapInformation(int rec, student data[40])
{
    int a,b;
    student temp;
    for (a=0; a<rec; a++)
    {
        for (b=a+1; b<rec; b++)
        {
            if (data[a].score<data[b].score)
            {
                temp=data[a];
                data[a]=data[b];
                data[b]=temp;
            }
        }
    }
}


void main()
{
    FILE *fp ;
    char password[CHARACTER], ch;
    char registeredPass[CHARACTER];
    int flag=0, position=0,i;
    int record, recordHistory, totalRec;
    student info[40];
    student stdrec[40];

    printf("\n\n\t\t\t\t\t|------------------------------------------|\n");
    printf("\t\t\t\t\t|          	                           |\n");
    printf("\t\t\t\t\t|       ASSIGNMENT C PROGRAM SEMESTER 2    |\n");
    printf("\t\t\t\t\t|          	                           |\n");
    printf("\t\t\t\t\t|           STUDENT DATA MANAGEMENT        |\n");
    printf("\t\t\t\t\t|          	                           |\n");
    printf("\t\t\t\t\t|          TEAM 7  CLASS 'A10' G24         |\n");
    printf("\t\t\t\t\t|          	                           |\n");
    printf("\t\t\t\t\t|------------------------------------------|\n\n");
    fp = fopen("password.bin", "r");
    if (fp == NULL)
    {
        fclose(fp);
        fp = fopen("password.bin", "w");
        while (flag==0)
        {
            printf("Create A New Password: ");
            gets(registeredPass);

            if(strlen(registeredPass)==0)
            {
                flag=0;
            }
            else
            {
                fputs(registeredPass, fp);
                printf("New Password Has Been Created Successfully...");
                fclose(fp);
                flag=1;
            }
        }
    }
    else
    {
        while(!feof(fp))
        {
            fgets(registeredPass, CHARACTER, fp);
        }
    }

    printf("\nPlease Enter Your Password : ");

    while(position<CHARACTER)
    {
        ch = getch();
        if(ch==13 || ch==27)
        {
            break;
        }

        else if(ch == 8 )
        {
            if( position>0)
            {
                position--;
                password[position]= '\0';
                printf("\b \b");
            }
        }
        else if(ch==32 || ch==9)
        {
            continue;
        }
        else
        {
            password[position]=ch;
            position++;
            printf("*");
        }

    }
    password[position]='\0';
    printf("\n");
    if(strlen(password)==0)
    {
        printf("No Password Entered!\n");
    }
    else
    {
        if(strcmp(registeredPass, password) == 0)
        {
            printf("\n\n");
            printf("\t\t\t\t\tLog Successful Login And Congratulations...!");
            printf("\n\n");

            fclose(fp);
            fp = fopen("RecNum.txt","r+");

            printf ("\nHow Many Student Data Do You Want To Enter? \n");
            printf("\nInput Record: ");
            scanf ("%d", &record);
            fclose(fp);
            fp=fopen("recordhistory.txt", "r+");
            if(fp==NULL)
            {
                fclose(fp);
                fp=fopen("recordhistory.txt","w+");
                fprintf(fp,"%d", record);
                recordHistory=0;
                rewind(fp);
            }
            else
            {
                fscanf(fp,"%d", &recordHistory);
                rewind(fp);
            }
            printf("\n");
            for (i=0; i<record; i++)
            {
                printf (" \n Enter Student ID [%d] : ", recordHistory+i+1);
                scanf ("%d",&info[recordHistory+i].id);
                printf (" \n Enter Student Name [%d] : ", recordHistory+i+1);
                fflush(stdin);
                gets(info[recordHistory+i].name);
                printf (" \n Enter Student Sex [%d] :  ", recordHistory+i+1);
                scanf("%s", info[recordHistory+i].sex);
                printf (" \n Enter Student Score [%d] : ", recordHistory+i+1);
                scanf ("%d", &info[recordHistory+i].score);
                printf ("\n");
            }
            totalRec=record+recordHistory;
            fprintf(fp,"%d", totalRec);
            fclose(fp);
            fp = fopen("StudentRecord.txt", "ab+");

            for (i=0; i<record; i++)
            {
                fwrite(&info[recordHistory+i], sizeof(student), 1, fp);
            }
            rewind(fp);
            for (i=0; i<totalRec; i++)
            {
                fread(&stdrec[i], sizeof(student), 1, fp);
            }

            swapInformation(totalRec, stdrec);

            printf ("\nStudent Record Written Successfully...  \n\n");

            printf("|-----------------------------STUDENT DATA RECORD------------------------------|\n");
            printf("|                                                                              |\n");
            printf("|           ID               Student Name          Sex           Score         |\n");
            printf("|                                                                              |\n");
            printf("|------------------------------------------------------------------------------|\n");

            for (i=0; i<totalRec; i++)
            {
                printf("        %5d            %10s           %7s        %7d   \n", stdrec[i].id, stdrec[i].name, stdrec[i].sex, stdrec[i].score);
            }
            printf("\n\nPress Any Key To Exit The Program...");

            printf("\n\n\n\t\t------------------------------------------------------------------------------------\n");
        }
        else
        {
            printf("\nYour Password Is Invalid! Please Try Again.\n");

            printf("\n\n\t\t------------------------------------------------------------------------------------\n");
        }
    }
    fclose(fp);
    getch();
}
