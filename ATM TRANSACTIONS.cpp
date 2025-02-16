#include<iostream>
using namespace std;
int main()
{
 int correctpin=1234;
 int balance=5000,amount,pin;
 int attempts=3;
 while(attempts>0){
 
 
cout<<" Enter your Pin  :";
cin>>pin;
if(correctpin==pin)
{
	cout<<" WELCOME "<<endl;
	break;
}
else
{
	attempts--;
	cout<<" icorrect pin "<<endl;
	cout<<" you have  "<<attempts<<"  attempts = "<<endl;
}
}
if(attempts==0)
{
	cout<<" access denied "<<endl;
	return 0;
}
cout<<" 1. Check balance \n 2. Deposit money \n 3. Withdraw money \n 4. cancel transactions "<<endl;
int choice;
while(true){

cout<<" enter your choice = "<<endl;
cin>>choice;
switch(choice){

case 1:
 cout<<balance<<endl;
break;
case 2:
cout<<" enter amount to deposit = ";
cin>>amount;
balance+=amount;
cout<<" your balance is =  "<<balance<<endl;
break;
case 3: 
cout<<" enter amount to withdraw = "<<endl;
cin>>amount;
if(amount>balance)
{
	cout<<" insufficent balance "<<endl;
}
else
{
	balance-=amount;
	cout<<" your new balance is = "<<balance<<endl;
}
break;
case 4: 
cout<<" see you next time "<<endl;
break;
default:
	cout<<" invalid input "<<endl;
}
}
return 0;	
}

