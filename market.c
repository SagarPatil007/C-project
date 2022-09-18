#include<stdio.h>
#include<stdlib.h>
#include"gotoxy.c"
void firstpage();
void Login();
void Items();
void caa();
struct  market{
    char name[20];
    char password[20];
    char dob[10];
    char mobo[12];
    char email[15];
}a,b[20];
int main()
{
    firstpage();
}
void Login()
{
    int choice,i;
    system("cls");
    go(40,3);
    printf("Welcome in our shop\n");
    go(30,5);
    printf("Enter Your Name :");
    fflush(stdin);
    gets(a.name);

    go(30,7);
    printf("Enter the password :");
    fflush(stdin);
    gets(a.password);
    for(int y=0;y<20;y++)
        {
        if (a.name == b[y].name)
        {
            if(a.password == b[y].password)
            {
                printf("Your are successfully logged.\n");
                getchar();
                Items();
            }
            else
            {
                printf("Failed...!!!\n");
                getch();
                break;
            }
        }
    }
}
void firstpage()
{
    int choice;
    system("cls");
    go(40,10);
    printf("Welcome to our system infotech...\n");
    getch();
    system("cls");
    while(1)
    {
        system("cls");
        go(40,3);
        printf("SYSTEM ADMIN PORTAL \n");
        go(30,5);
        printf("1.Create an account \n");
        go(30,6);
        printf("2.Login for User \n");
        go(30,7);
        printf("3.Login for Admin \n");
        go(30,9);
        printf("Enter your choice :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                caa();
                break;
            case 2:
                Login();
                break;
            case 3:
                Login();
                break;
            default:
                printf("Invalid choice.....\n");
        }
    }

}
void caa() /// create an account
{
    system("cls");
    int choice;
    while(1)
    {
        for(int i=0;i<20;i++)
        {
            go(40,3);
            printf("Welcome into the sign in page\n");
            go(20,5);
            printf("NAME :");
            fflush(stdin);
            gets(b[i].name);
            go(20,7);
            printf("PASSWORD :");
            fflush(stdin);
            gets(b[i].password);
            go(20,9);
            printf("Mobile no :");
            fflush(stdin);
            gets(b[i].mobo);
            go(20,11);
            printf("D.o.b. :");
            fflush(stdin);
            gets(b[i].dob);

            go(30,16);
            printf("SAVE(1)");
            go(60,16);
            printf("CANCEL(2)");
            go(45,18);
            printf("Choice:");
            scanf("%d",&choice);
            if(choice==1)
            {
                break;
            }
            else
            {
                break;
            }
        }
        if(choice==1)
        {
            break;
        }
    }
}
void Items()
{
    printf("Select your Items ....\n");
    getch();
}
