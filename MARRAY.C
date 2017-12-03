#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],b[100];
int i,n1,n2;
clrscr();
printf("enter the number of element in first array n1");
scanf("%d",&n1);
printf("enter the first array\n");
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
printf("enter the num of element in second array n2\n");
scanf("%d",&n2);
for(i=0;i<n2;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n1+n2;i++)
{
if(i>n1-1)
{
a[i]=b[i-n2];
}
}
for(i=0;i<n1+n2;i++)
{
printf("%d",a[i]);
}
getch();
}