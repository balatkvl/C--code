#include<iostream.h>
#include<conio.h>
void main()
{
char ch1[20],ch2[20];
int i,n,count=0;
clrscr();
cout<<"enter the value of n:";
cin>>n;
for(i=0;i<n;i++)
{
cin>>ch1[i];
}
for(i=0;i<n;i++)
{
ch2[i]=ch1[i];
cout<<ch2[i];
}
cout<<"\n"<<ch2[1]<<"\n";
for(int j=n-1;j>=0;j--)
{
cout<<ch1[j];
}
cout<<"\n"<<ch1[1];
i=0;
j=n-1;
while(ch1[j]==ch2[i])
{
count=count+1;
i++;
j--;
}
cout<<count;
if(count==n)
cout<<"the given string is palindrome";
else
cout<<"the given string is not palindrome";
getch();
}