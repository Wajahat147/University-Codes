#include<iostream>
#include<string>
using namespace std;
void swap(int &a,int &b){
	int z=a;
	a=b;
	b=z;
}
int main(){
	int x,y;
	cout<<"Enter 1"<<endl;
	cin>>x;
	cout<<"Enter 2"<<endl;
	cin>>y;
	cout<<" Before swap"<<x<<"and"<<y;
	swap(x,y);
	cout<<" After Swap"<<x<<"and"<<y;
	return 0;
}