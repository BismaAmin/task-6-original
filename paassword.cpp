#include<iostream>
#include<string>
using namespace std;
int main () 
{
	string password, corpassword;
	int attempt=0, maxattempt=3;
	cout<<"set a password =";
	cin>>corpassword;
	do 
	{
		cout<<"enter ur password=";
		cin>>password;
		attempt++;
		if(password==corpassword)
		{ 
		cout<<"you entered a correct password"<<endl;
		}
		else
		{ 
		cout<<"you entered a wrong password"<<endl;
		cout<<"u have attempted  " <<attempt<<" time and remember u only have 3 attempts "<<endl;
		}
    }   
		while(attempt<maxattempt);
	return 0;
}