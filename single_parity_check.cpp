#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
int n;
cout<<"Enter length of binary string:";
cin>>n;
int bin[n+1], x = 0,z;
cout<<"Enter Binary 1/0 \n\n";
for(z = 0; z < n; z++)
{
cout<<"Binary "<<"("<< z + 1<<"): ";
cin>>bin[z];
}
bin[z]=0;
for(z = 0; z < n; z++)
if (bin[z] == 1)
x++;
if(x%2!=0)
bin[z]=1;
cout<<"Result\n";
for(z = 0; z < n+1; z++)
{
cout<<bin[z];
}
}