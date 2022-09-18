#include<stdio.h>
int check(int,int);
int main()
{
    int num,guess=49,chance=1,k;
       for(k=0;k<5;k++)
       {
            printf("chance %d:",k+1);
            scanf("%d",&num);
            if(num==guess)
            {
                printf("you won the game......");
                getchar();
  		getchar();
                break;
            }
            else if(k==4)
            {
                printf("you lost the game.....");
                break;
            }
            if(check(num,guess)==0)
                printf("bada number bolo\n");
            else if(check(num,guess)==1)
                printf("chhota number bolo\n");
            printf("Now %d chance is left \n",5-(k+1));
        }
        getchar();
}
int check(int num,int guess)
{
    if(num<guess)
        return 0;
    else
        return 1;
}
