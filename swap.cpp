#include<iostream>
using namespace std;
int main(){
int a,b;
cin>>a;
cin>>b;
cout<<"Before";
cout<<"a = "<<a;
cout<<"b = "<<b;
a=a+b;
b=a-b;
a=a-b;
cout<<"After";
cout<<"a = "<<a;
cout<<"b = "<<b;
return 0;
}
