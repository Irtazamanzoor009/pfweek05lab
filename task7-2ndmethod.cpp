#include<iostream>
using namespace std;

void spell(int num);

main()
{
while(true)
{
	int num;
	cout<<"\nEnter number: ";
	cin>>num;
	spell(num);
}

}

void spell(int num)
{
	if(num/10 == 2)
	{
		cout<<"twenty";
	}
	if(num/10 == 3)
	{
		cout<<"thirty";
	}	
	if(num/10 == 4)
	{
		cout<<"fourty";
	}	

	if(num/10 == 5)
	{
		cout<<"fifty";
	}	

	if(num/10 == 6)
	{
		cout<<"sixty";
	}	

	if(num/10 == 7)
	{
		cout<<"seventy";
	}	

	if(num/10 == 8)
	{
		cout<<"eighty";
	}	

	if(num/10 == 9)
	{
		cout<<"ninety";
	}
	if(num % 10 == 1)
	{
		cout<<"one";
	}
	if(num % 10 == 2)
	{
		cout<<"two";
	}
	if(num % 10 == 3)
	{
		cout<<"three";
	}
	if(num % 10 == 4)
	{
		cout<<"four";
	}
	if(num % 10 == 5)
	{
		cout<<"five";
	}
	if(num % 10 == 6)
	{
		cout<<"six";
	}
	if(num % 10 == 7)
	{
		cout<<"seven";
	}
	if(num % 10 == 8)
	{
		cout<<"eight";
	}
	if(num % 10 == 9)
	{
		cout<<"nine";
	}

	


}




