#include<stdio.h>
#include<string.h>
void creating();
void marking(int,char);
int checking();
char a[]={'0','1','2','3','4','5','6','7','8','9'};
int main()
{
char mark;
int i,choice,player=1;
do
{
creating();
player=(player%2)?1:2;
printf("player%d enter number:",player);
scanf("%d",&choice);
mark=(player==1)?'X':'O';
marking(choice,mark);
i=checking();
player++;
}while(i==-1);
creating();
if(i==1)
{
printf("Congratulation\n");
printf("player%d have won the match",player-1);
}
else
{
printf("match draw");
}
return 0;
}
void creating()
{
printf(" TIC TAC\n");
printf(" %c | %c | %c\n ",a[1],a[2],a[3]);
printf("_________\n");
printf(" %c | %c | %c\n ",a[4],a[5],a[6]);
printf("_________\n");
printf(" %c | %c | %c\n ",a[7],a[8],a[9]);
}
void marking(int choice,char mark)
{
if((choice==1)&&(a[1]=='1'))
{
a[1]=mark;
}
else if((choice==2)&&(a[2]=='2'))
{
a[2]=mark;
}
else if((choice==3)&&(a[3]=='3'))
{
a[3]=mark;
}
else if((choice==4)&&(a[4]=='4'))
{
a[4]=mark;
}
else if((choice==5)&&(a[5]=='5'))
{
a[5]=mark;
}
else if((choice==6)&&(a[6]=='6'))
{
a[6]=mark;
}
else if((choice==7)&&(a[7]=='7'))
{
a[7]=mark;
}
else if((choice==8)&&(a[8]=='8'))
{
a[8]=mark;
}
else if((choice==9)&&(a[9]=='9'))
{
a[9]=mark;
}
else
{
printf("match draw");
}
}
int checking()
{
if((a[1]==a[2])&&(a[3]==a[2]))
{
return 1;
}
else if((a[4]==a[5])&&(a[5]==a[6]))
{
return 1;
}
else if((a[7]==a[8])&&(a[8]==a[9]))
{
return 1;
}
else if((a[1]==a[4])&&(a[4]==a[7]))
{
return 1;
}
else if((a[2]==a[5])&&(a[5]==a[8]))
{
return 1;
}
else if((a[3]==a[6])&&(a[6]==a[9]))
{
return 1;
}
else if((a[1]==a[5])&&(a[5]==a[9]))
{
return 1;
}
else if((a[3]==a[5])&&(a[5]==a[7]))
{
return 1;
}
else if((a[1]!='1')&&(a[2]!='2')&&(a[3]!='3')&&(a[4]!='4')&&(a[5]!='5')&&(a[6]!='6')&&(a[7]!='7')&&(a[8]!='8')&&(a[9]!='9'))
{
return 0;
}
else
{
return -1;
}
}
