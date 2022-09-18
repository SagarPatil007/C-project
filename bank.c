#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
void account_type();
void edit();
struct bank{
	char name[30];
	char mono[12];
	char age[3];
	char email[25];
	char account_type[20];
	char m;
}s[20];
struct payment{
	 float money;
	 float am;
	 float tp;
}static p[20];
static int x,y,z,xx;
int main()
{
	int ab;

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tWelocome to surat bank.......");
	getche();
	system("cls");
	while(1)
	{
		system("cls");
		static int px=0;
		int choice;
		printf("1.create an account\n\n");
		printf("2.Account info\n\n");
		printf("3.Payment methods\n\n");
		printf("4.Edit an account\n\n");
		printf("5.Exit\n\n");
		printf("Enter the your choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				srand(0);
				system("cls");
            for(;x<20;x++)
            {
                printf("%d",x);
				printf("\t\t\t\tEnter the details.....\n");
				printf("Enter your full name :");
				fflush(stdin);
				gets(s[x].name);
				printf("Enter your mobile number :");
				gets(s[x].mono);
				printf("Enter the age :");
				gets(s[x].age);
				printf("Enter your email id :");
				gets(s[x].email);
				printf("select your account type :\n");
				account_type();
				int i;
				char a[20][20],temp;
//for(i=0;i<11;i++)
			//	{
//temp=(rand()%10);
//a[i]=temp;
			//	}
				printf("Account no :");
				for(i=0;i<11;i++)
					printf("%s",a[i]);
				getche();
				break;
				if(x<20)
                {
                    x++;
                }
            }
				break;
			case 2:
				system("cls");
				printf("%s\n\n",__DATE__);
				for(y=0;y<20;y++)
                {
				printf("Name : %s\n",s[y].name);
				printf("mobile number :%s\n",s[y].mono);
				printf("Age : %s\n",s[y].age);
				printf("Account type :%s\n",s[y].account_type);
				printf("Email id :%s\n",s[y].email);
				printf("Account no :");
///				for(i=0;i<11;i++)
			//		printf("%s",a[i]);
             //   }
				getche();
				break;
			case 3:

				system("cls");
				printf("1.Add money\n");
				printf("2.show balance\n");
				printf("3.send money\n");
				printf("choice :");
				scanf("%d",&ab);
				switch(ab)
				{
					system("cls");
					case 1:
                    for(z=0;z<20;z++)
                    {
						system("cls");
						if(px==0)
						{
							printf("Enter the amount :");
							scanf("%f",&p[z].money);
							px++;
						}
						else
						{
							printf("Enter the amount :");
							scanf("%f",&p[z].tp);
							p[z].money=p[z].money+p[z].tp;
						}
                    }
						break;
					case 2:
						system("cls");
						for(z=0;z<20;z++)
                        {
						printf("Balance :%.2f",p[z].money);
						getche();
                        }
						break;
					case 3:
						system("cls");
						for(z=0;z<20;z++)
                        {
						printf("Amount :");
						scanf("%f",&p[z].am);
						if(p[z].money<=p[z].am)
						{
							printf("Balance is low....\n");
							printf("Please deposited money in your account\n");
							getche();
							break;
						}
						else
							p[z].money=p[z].money-p[z].am;
						printf("you sent money.... \n");
						getche();
						break;
				}
            }
				break;
				system("cls");
			case 4:
				system("cls");
				edit();
				int ab1;
				printf("choice=");
				scanf("%d",&ab1);
				switch(ab1)
				{
					system("cls");
					case 1:
                        for(xx=0;xx<20;xx++)
                        {
                        printf("Enter your full name :");
						fflush(stdin);
						gets(s[xx].name);
						getche();
						break;
                        }
						break;
					case 2:
						system("cls");
                        for(xx=0;xx<20;xx++)
                        {
                        printf("Enter your mobile number :");
						gets(s[xx].mono);
						getche();
                        }
						break;
					case 3:
						system("cls");
                        for(xx=0;xx<20;xx++)
                        {
						printf("Enter your email id :");
						gets(s[xx].email);
						getche();
                        }
						break;
					case 4:
						system("cls");
                        for(xx=0;xx<20;xx++)
                        {
						printf("Enter the age :");
						gets(s[xx].age);
						getche();
                        }
						break;
					case 5:
						system("cls");
                        for(xx=0;xx<20;xx++)
                        {
						printf("select your account type :\n");
						account_type();
						getche();
                        }
						break;
				}
				break;
			case 5:
				exit(1);
				break;
		}
	}
}
}
void account_type()
{
	int a;
	printf("1.savings account\n");
	printf("2.credit account\n");
	printf("3.General account\n");
	printf("Choice :");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		        for(xx=0;xx<20;xx++)
                    strcpy(s[xx].account_type,"savings account");
			break;
		case 2:
		     for(xx=0;xx<20;xx++)
			strcpy(s[xx].account_type,"credit account");
			break;
		case 3:
		     for(xx=0;xx<20;xx++)
			strcpy(s[xx].account_type,"General account");
			break;
	}
}
void edit()
{
	printf("1.Name\n2.Mobile number\n3.age\n4.Email id\n5.Account type\n");
}

