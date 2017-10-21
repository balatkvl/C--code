#include<iostream.h>
#include<conio.h>
void main()
{
int n,count1=0;
int count2=1,c;
clrscr();
cout<<"enetr the series length";
cin>>n;
//cout<<count1<<count2;
for(int i=0;i<n;i++)
{
if(i<=1)
c=i;
else
{
c=count1+count2;
count1=count2;
count2=c;
}
cout<<c;
}
getch();
}