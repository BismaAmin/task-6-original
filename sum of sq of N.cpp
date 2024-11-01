#include<iostream>
using namespace std;
int main () 
{
	int n,i=1,sum=0;
	cout<<"enter a number=";
	cin>>n;
	do
	{ 
	  sum=sum+(i*i);
	  i++;
	}
	while(i<=n);
	cout<<"the sum = "<<sum;
return 0;
}
	