#include<iostream>
using namespace std;
int main()
{
int temperature;
cout<<" Enter The Temperature "<<endl;
cin>>temperature;
if(temperature>=35)
{
	cout<<" HoT DaY "<<endl;
}
else if(temperature>25)
{
	cout<<" PLeasanT DaY "<<endl;
}
else if(temperature<25)
{
	cout<<" CooL DaY "<<endl;
}
return 0;
};