#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,flag;
printf("Enter two numbers(intervals):");
scanf("%d%d",&a,&b);
printf("prime numbers between %d and %d are:",a,b);
while(a<b)
{
flag=0;
for(c=0;c<=a/2;++c)
{
if(a%c==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("d",a);
++a;
}
getch();
}
