//Swap the values: a=10, b=20.
#include<iostream>
using namespace std;
int main()
{int a,b,temp;
a=10;
b=20;
cout<<"Before Swapping : ";
cout<<endl<<"A : "<<a;
cout<<endl<<"B : "<<b;
temp = a;
a = b;
b = temp;
cout<<endl<<"After Swapping : ";
cout<<endl<<"A : "<<a;
cout<<endl<<"B : "<<b;
return 0;
}