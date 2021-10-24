#include<stdio.h>
#include<conio.h>
void main()
{
char ch[]="I AM AN IDIOT.";
char c='A';
int i=0;
while(c)
{
c=getch();
printf("%c\a",ch[i]);
i++;
if(i==14)
{
printf(" "); i=0;
}
}
}