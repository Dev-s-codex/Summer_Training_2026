//Write a program to calculate Simple Interest.
#include<iostream>
using namespace std;
int main()
{float p,r,t,si;
cout<<"Enter Principal: ";
cin>>p;
cout<<"Enter Rate of Interest: ";
cin>>r;
cout<<"Enter Time Period: ";
cin>>t;
si = (p * t * r) / 100;
cout<<"Simple Interest : "<<si;
return 0;}
