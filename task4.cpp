#include<iostream>
using namespace std;

void capital(char ch);

main()
{
while(true)
{
	char ch;
	cout<<"Enter any alphabet: ";
	cin>>ch;

	capital(ch);
}

}

void capital(char ch)
{
	
	

	
	if(ch >= 'a' && ch <='z')
	{
		
		cout<<"Lower case letters.\n";
	}

	if(ch >= 'A' && ch<='Z')
	{
		
		cout<<"Upper case letter.\n";
		
	}


}