#include<iostream>
using namespace std;
int main()
{
 int a=20,b=13;
 char op;
 cout<<" Enter the arithmetic operator ";
 cin>>op;
 if(op=='+')
 {
 	cout<<a<<"+"<<b<<" ="<<a+b<<endl;
 	
 }
 else
 {
 	cout<<" You entered wrong operator";
 }
 return 0;
}