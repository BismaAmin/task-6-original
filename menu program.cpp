#include<iostream>
using namespace std;
int main () 
{
	int ch, i=1;
	cout<<"the menu is"<<endl;
	cout<<"1. soft drink"<<endl;
	cout<<"2. water"<<endl;
	cout<<"3. thats all we had"<<endl;
	do
	{ 
	cout<<"enter a num regarding the menu as ur choice (1/2/3)=";
	cin>>ch;
	i++;
	if(ch==1)
	cout<<"soft drink"<<endl;
	else if(ch==2)
	cout<<"water"<<endl;
	else if(ch==3)
	cout<<"exited from menu"<<endl;
	else 
	cout<<"invalid number so please enter num according to our menu"<<endl;
	}
	while(ch!=3);
return 0;
}

	
	
	