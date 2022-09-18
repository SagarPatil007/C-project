#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

static int var=0; ///this all are global variable and function.

static int count1,count2,count3,count4,count5,count6,count7,count8,vb=0;
struct vin{
    char name_c[10];
    char mono[20];
    int age;
    int voter_id;
    int date,month,year,password_c;
};
int password;
int system_password=1234;
char name[10];
char name_cc[10];
int voter_idc;
int pass;
struct vin s[20];
int check(int []);
int xy[20]={0}; /// for again voting
int xz[20]={0};/// for sign
int main()
{
    char a[8][25]= {"BHARTIY JANATA PARTY",
                    "INDIAN NATIONAL CONGRESS",
                    "SAMAJVADI PARTY",
                    "SHIVSENA",
                    "RASHTIY JANATA DAL",
                    "TRUNMUL CONGRESS",
                    "AAM AADAMI PARTY",
                    "NOTA"
                    };
    char ch;
    int ab,aa,ac,flag=1,i=0,ba;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWELCOME TO ELECTRONIC VOTING MACHINE.....");
    getche();
    system("cls");
    while(1)
    {
        system("cls");
        printf("\t\t\t\t\tEvm management system\n\n");
        printf("Options :\n");
        for(i=0;i<120;i++)
            printf("=");
        printf("\n1.Registration\n\n2.Sign in\n\n3.Voting time\n\n4.Details for previous voter\n\n5.Counting vote\n\n6.Exit\n\n");
        printf("Choice=");
        scanf("%d",&ab);
        switch(ab)
        {
            case 1: ///registration
                        system("cls");
                        while(var<20)
                        {
                            printf("Today's %d registration\n\n",var+1);
                            printf("USER NAME:");
                            fflush(stdin);
                            gets(s[var].name_c);
                            printf("ENTER PASSWORD:");
                            scanf("%4d",&s[var].password_c);
                            printf("Age:");
                            fflush(stdin);
                            scanf("%d",&s[var].age);
                            if(s[var].age>=18 )
                            {
                                if(s[var].age>=130)
                                {
                                printf("you are not able for voting because you are only %d year old...",s[var].age);
                                getche();
                                break;
                                }
                            }
                            else
                            {
                                printf("you are not able for voting because you are only %d year old...",s[var].age);
                                getche();
                                break;
                            }
                            printf("DOB:");
                            fflush(stdin);
                            scanf("%2d %2d %4d",&s[var].date,&s[var].month,&s[var].year);
                            printf("MOBILE NO:");
                            scanf("%s",s[var].mono);
                            srand(time(NULL));
                            s[var].voter_id=(rand());
                            printf("Voter id :");
                            printf("%d",s[var].voter_id);
                            printf("\n\tSUBMIT: y/n ");
                            fflush(stdin);
                            scanf("%c",&ch);
                            if(ch=='y')
                            {
                                printf("data is stored\n");
                                printf("If you continue for new registration (1/0):");
                                scanf("%d",&ac);
                                if(ac==0)
                                {
                                    var++;
                                    getche();
                                    break;
                                }
                                system("cls");
                                var++;
                            }
                            else
                            {
                                printf("data is not stored...\n");
                                break;
                            }
                        }
                          break;
            case 2: ///sign in
                    system("cls");
                    static int i=0;
                    printf("%d",i);
                    printf("please sign in your account\n");
                    printf("NAME:");
                    fflush(stdin);
                    gets(name); // only for checking not for in structure
                    printf("PASSWORD:");
                    scanf("%d",&password);// only for checking not for in structure
                    printf("\tSUBMIT: y/n ");
                    fflush(stdin);
                    scanf("%c",&ch);
                    if(ch=='y')
                    {
                        while(i<20)
                        {
                            int i=0;
                            next:
                            if((strcmp(name,s[i].name_c)==0)&& password == s[i].password_c)
                            {
                                flag=0;
                                xz[i]=1;
                                printf("\nyou logged successfully\n");
                                getche();
                                break;
                            }
                            else
                            {
                                if(i<=5)
                                {
                                    i++;
                                    goto next;
                                }
                                else
                                {
                                    printf("invalid Details\n");
                                    getche();
                                    break;
                                }
                            }
                        }
                    }
                    else
                    {
                        printf("invalid selection retry!!!!!");
                        getche();
                        break;
                    }
                break;
            case 3: /// voting time
                    system("cls");
                    int temp=0,bac;
                    int j=0,tp;
                    printf("Enter the voter id:");
                    scanf("%d",&bac);
                    next2:
                    for(;j<20;)
                    {
                       tp=s[j].voter_id;
                       goto label1;
                    }
                    label1:
                    if((tp==bac)==1)
                    {
                        if(xy[j]==0)
                        {
                            if(xz[j]==1)
                            {
                            printf("Name = %s\n",s[j].name_c);
                            fflush(stdin);
                            xy[j]=1;
                            printf("your are able to voting\n");
                            printf("Here, the parties names are below\n");
                            printf("[1]=BHARTIY JANATA PARTY\n");
                            printf("[2]=INDIAN NATIONAL CONGRESS\n");
                            printf("[3]=SAMAJVADI PARTY\n");
                            printf("[4]=SHIVSENA\n");
                            printf("[5]=RASHTIY JANATA DAL\n");
                            printf("[6]=TRUNMUL CONGRESS\n");
                            printf("[7]=AAM AADAMI PARTY\n");
                            printf("[8]=NOTA\n");

                            printf("please enter the your voting party number:");
                            scanf("%d",&ba);
                            switch(ba)
                            {
                                case 1:bjp();
                                    break;
                                case 2:inc();
                                    break;
                                case 3:sp();
                                     break;
                                case 4:shiv();
                                    break;
                                case 5:rjd();
                                    break;
                                case 6:tmc();
                                    break;
                                case 7:aap();
                                    break;
                                case 8:nota();
                                    break;
                            }
                            printf("You voted %s\n",a[ba-1]);
                            printf("Thanks for voting %s\n",s[j].name_c);
                            getche();
                            break;
                            }
                            else
                            {
                                printf("Please sign in first...\n");
                                getche();
                                break;
                            }
                        }
                        else
                        {
                            printf("You can vote only one time... \n");
                            getche();
                            break;
                        }
                    }
                    else
                    {
                        if(j<5)
                        {
                            j++;
                            goto next2;
                        }
                        else
                        {
                            printf("invalid id\n");
                            getche();
                            break;
                        }
                    }
                getche();
                break;
            case 4:// search for name
                    system("cls");
                    printf("Enter the name :");
                    scanf("%s",name_cc);
                    printf("Enter the voter id :");
                    scanf("%d",&voter_idc);
                    int oo=0;
                    int ad=0;
                    while(oo<20)
                    { //  puts(s.name_c[oo]);
                        next1:
                        if(strcmp(s[oo].name_c,name_cc)==0 )
                        {
                            if(voter_idc==s[oo].voter_id)
                            {
                                printf("Voter number :%d\n",oo+1);
                                printf("NAME :%s\n",s[oo].name_c);
                                printf("Mobile no :%s\n",s[oo].mono);
                                printf("AGE :%d\n\n",s[oo].age);
                                if(ad==0)
                                {
                                    oo++;
                                    ad++;
                                    getche();
                                    break;
                                }
                                system("cls");
                                static int oo=0;
                                printf("Enter the name :");
                                scanf("%s",name_cc);
                            }
                        }
                        else
                        {
                            if(oo<20)
                            {
                                oo++;
                                goto next1;
                            }
                            else
                            {
                                printf("This name voter is not in search list\n");
                                getche();
                                break;
                            }
                        }
                    }
                break;
            case 5: ///counting vote
                system("cls");
                printf("Enter the system password :");
                scanf("%d",&pass);
                if((pass==system_password)==1)
                {
                    system("cls");
                    printf("[1]=BHARTIY JANATA PARTY\n");
                    printf("[2]=INDIAN NATIONAL CONGRESS\n");
                    printf("[3]=SAMAJVADI PARTY\n");
                    printf("[4]=SHIVSENA\n");
                    printf("[5]=RASHTIY JANATA DAL\n");
                    printf("[6]=TRUNMUL CONGRESS\n");
                    printf("[7]=AAM AADAMI PARTY\n");
                    printf("[8]=NOTA\n");
                    printf("SELECT THE PARTY WHICH SEE THE TOTAL VOTES:\n");
                    scanf("%d",&aa);
                    switch(aa)
                    {
                    case 1:printf("BHARTIY JANATA PARTY = %d\n",count1);
                        getche();break;
                    case 2:printf("INDIAN NATIONAL CONGRESS = %d\n",count2);
                       getche(); break;
                    case 3:printf("SAMAJVADI PARTY =%d\n",count3);
                       getche(); break;
                    case 4:printf("SHIVSENA = %d\n",count4);
                      getche();  break;
                    case 5:printf("RASHTIY JANATA DAL = %d\n",count5);
                       getche(); break;
                    case 6:printf("TRUNMUL CONGRSS = %d\n",count6);
                       getche(); break;
                    case 7:printf("AAM AADAMI PARTY = %d\n",count7);
                      getche();  break;
                    case 8:printf("NOTA = %d\n",count8);
                       getche(); break;
                    }
                    printf("Option = See full list...(1/0)\nAnswer =");
                    scanf("%d",&ba);
                    if(ba==1)
                    {
                        system("cls");
                        printf("\t\t\tCounter meter\n\n");
                        printf("1.BHARTIY JANATA PARTY = %d\n\n",count1);
                        printf("2.INDIAN NATIONAL CONGRESS = %d\n\n",count2);
                        printf("3.SAMAJVADI PARTY =%d\n\n",count3);
                        printf("4.SHIVSENA = %d\n\n",count4);
                        printf("5.RASHTIY JANATA DAL = %d\n\n",count5);
                        printf("6.TRUNMUL CONGRSS = %d\n\n",count6);
                        printf("7.AAM AADAMI PARTY = %d\n\n",count7);
                        printf("8.NOTA = %d\n\n",count8);
                        getche();
                    }
                }else
                {
                    printf("invalid password....\n");
                    getche();
                    break;
                }
                break;
            case 6: ///exit
                exit(0);
                break;
            default:
                printf("invalid selection \n");
                exit(0);
        }
    }
}
void bjp()
{
    count1++;
}
void inc()
{
    count2++;
}
void sp()
{
    count3++;
}
void shiv()
{
    count4++;
}
void rjd()
{
    count5++;
}
void tmc()
{
    count6++;
}
void aap()
{
    count7++;
}
void nota()
{
    count8++;
}
