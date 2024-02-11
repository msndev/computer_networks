#include<iostream>
using namespace std;
int main()
{
int windowsize,sent=0,ack,i;
cout<<"Enter window size: ";
cin>>windowsize;
while(1)
{
for( i = 0; i < windowsize; i++)
{
cout<<"Frame"<<sent<<" has been transmitted.\n";
sent++;
if(sent == windowsize)
break;
}
cout<<"\nPlease enter the last Acknowledgement received.\n";
cin>>ack;
if(ack == windowsize)
break;
else
sent = ack;
}
return 0;
}