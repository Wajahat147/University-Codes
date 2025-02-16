#include<iostream>
using namespace std;
int main ()
{
int choice,radius;
cout<<" Enter Radius"<<endl;
cin>>radius;
cout<<" Enter 1 for area and 2 for circumference"<<endl;
cin>>choice;
if (choice==1)
{
  cout<<"Area is "<<3.14*radius*radius;
}
else if( choice==2)
{
	cout<<2*3.14*radius<<endl;
}
else 
{
	cout<<" ERROR";
}
return 0;
}