#include<iostream.h>
#include<conio.h>
void main()
{
int n,fact=1;
clrscr();
cout<<"enter the num ";
cin>>n;
if(n!=0)
{
for(int i=1;i<=n;i++)
{
fact=fact*(i);
}
cout<<fact;
}
else if(n==0)
{
cout<<"1";
}
getch();
}