#include<iostream>
using namespace std;
int main () 
{
	int a=6,n,i=1;
	do
	{
		cout<<"guess the number=";
		cin>>n;
		i++;
		if(n==a)
		cout<<"u guessed it correctly"<<endl;
		else
		cout<<"u guessed it wrong so try again"<<endl;
	}
	while(n!=a);
return 0;
}
	