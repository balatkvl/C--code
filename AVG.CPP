#include<iostream.h>
#include<conio.h>
void main()
{
int n,rem,count=0,c=0,d;
clrscr();
cout<<"enter the n";
cin>>n;
for(int i=1;i<n;i++)
{
rem=i%2;
if(rem==1)
{
//cout<<i;
count=count+i;
d=++c;
}
}
cout<<"avg is"<<count/d;
//cout<<d;

getch();
}