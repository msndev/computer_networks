#include<iostream>
using namespace std;
int main()
{
char s[5][9];
int i,j,n,cnt;
for(i=0;i<4;i++)
{
cout<<"Enter frame "<<i<<": ";
cin>>s[i];
}
for(i=0;i<4;i++)
{
cnt=0;
for(j=0;s[i][j]!='\0';j++)
{
if(s[i][j]=='1')
{
cnt++;
}
}
if(cnt%2==0)
{
s[i][j]='0';
}
else
{
s[i][j]='1';
}
j++;
s[i][j]='\0';
}
for(j=0;j<=7;j++)
{
cnt=0;
for(i=0;i<4;i++)
{
if(s[i][j]=='1')
{
cnt++;
}
}
if(cnt%2==0)
{
s[i][j]='0';
}
else
{
s[i][j]='1';
}
}
s[i][j]='\0';
for(i=0;i<=4;i++)
{
cout<<"\n "<<s[i];
}
}