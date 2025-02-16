#include<iostream>
#include<string>
using namespace std;
struct details{
	string name;
	int sap;
	string dpt;
	string course;
};
int main (){
	int students=2;
	for(int i=0;i<students;i++){
		details data[2];
		cout<<"Please Enter your Details\n "<<endl;
		cout<<"Name = ";
		cin>>data[i].name;
		cout<<"SAP = ";
		cin>>data[i].sap;
		cout<<"Department = ";
		cin>>data[i].dpt;
		cout<<"Course = ";
		cin>>data[i].course;  
		cout<<"\n|...................|";
	cout<<"\nStudents details \n";
	cout<<"\nName ="<<data[i].name;
	cout<<"\nSap ="<<data[i].sap;
	cout<<"\nDepartment ="<<data[i].dpt;
	cout<<"\nCourse ="<<data[i].course;
	cout<<"\n|......................|\n"; 
	}
	
	return 0;
}