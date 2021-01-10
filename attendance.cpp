#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,enter;
float ch;
struct data
{
int rollno,daysp,daysa;
char name[20],branch[20];
float per;
};
clrscr();
printf("\nEnter no. of students=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
struct data s;
printf("\n\nEnter 1 to continue:");
scanf("%d",&enter);
if(enter==1)
{
printf("\nName=");
scanf("%s",&s.name);
printf("\nBranch=");
scanf("%s",&s.branch);
printf("\nRoll No.=");
scanf("%d",&s.rollno);
printf("\nDays present=");
scanf("%d",&s.daysp);
s.daysa=(31-s.daysp);
printf("\nDays absent=%d",s.daysa);
s.per=(s.daysp/31.0)*100.0;
printf("\nPercentage=%f",s.per);
ch=s.per;
if(ch>=80.0)
{
printf("\nGood!!");
}
else if((ch>=60.0)&&(ch<80.0))
{
printf("\nBe regular");
}
else if((ch>=40.0)&&(ch<30.0))
{
printf("\nCall your parents to meet teachers");
}
else
{
printf("\nYour fail! Call your parents to meet teachers");
}
}
}
getch();
}
