#include<iostream>
using namespace std;
int main()
{
int i,n,a,b,c,t,s[10],r[10],ch;
cout<<"Enter the no. of frames sent:";
cin>>n;
cout<<"Enter the window size of sender:";
cin>>a;
cout<<"Enter the window size of receiver:";
cin>>b;
cout<<"Enter the time limit:";
cin>>c;
for(i=0;i<n;i++)
{
if(i%2==0)
{
s[i]=0;
r[i]=0;
}
else
{
s[i]=1;
r[i]=1;
}
}
i=0;
cout<<"\n";
while(n>0)
{
cout<<"1.Normal transmission\n2.Frame lost\n3.Acknowledgement lost\nEnter your
choice:";
cin>>ch;
cout<<"\n";
switch(ch)
{
case 1:cout<<"Sending frame "<<s[i]<<endl;
cout<<"Received frame "<<s[i]<<endl;
cout<<"Acknowledgement received for frame "<<s[i]<<endl;
i=i+a;
break;
case 2:cout<<"Sending frame "<<s[i]<<endl;
sleep(t);
cout<<"Resending frame "<<s[i]<<endl;
cout<<"Received frame "<<s[i]<<endl;
cout<<"Acknowledgement received for frame "<<s[i]<<endl;
i=i+a;
break;
case 3:cout<<"Sending frame "<<s[i]<<endl;
cout<<"Received frame "<<s[i]<<endl;
sleep(t);
cout<<"Resending frame "<<s[i]<<endl;
cout<<"Received frame "<<s[i]<<endl;
cout<<"Acknowledgement received for frame "<<s[i]<<endl;
i=i+a;
break;
}
n--;
cout<<"\n";
}
}