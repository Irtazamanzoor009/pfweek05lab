#include<iostream>
using namespace std;

void spell(int num);
void spell2(int num1);

int num;
int num1;

main()
{
while(true)
{
	
	cout<<"\nEnter any number: ";
	cin>>num;
	if(num >=1 && num <=10 )
	{
	spell(num);
	}
	if(num >=20 && num <=99)
	{
		spell2(num1);
	}
}	



}

void spell(int num)
{
	if(num == 1)
	{
		cout<<" one"<<endl;
	}
	if(num == 2)
	{
		cout<<" two"<<endl;
	}
	if(num == 3)
	{
		cout<<" three"<<endl;
	}
	if(num == 4)
	{
		cout<<" four"<<endl;
	}
	if(num == 5)
	{
		cout<<" five"<<endl;
	}
	if(num == 6)
	{
		cout<<" six"<<endl;
	}
	if(num == 7)
	{
		cout<<" seven"<<endl;
	}	
	if(num == 8)
	{
		cout<<" eight"<<endl;
	}
	if(num == 9)
	{
		cout<<" nine"<<endl;
	}
	if(num == 10)
	{
		cout<<" ten"<<endl;
	}
	
	
	
}

void spell2(int num1)
{
	if(num >= 20 && num <=29)
	{
		cout<<" twenty";
		int n1 = num % 10;		
		num = n1;
		spell(num);
	}
	
	if(num >= 30 && num <=39)
	{
		cout<<" thirty";
		int n1 = num % 10;		
		num = n1;
		spell(num);
	}
	if(num >= 40 && num <=49)
	{
		cout<<" fourty";
		int n1 = num % 10;		
		num = n1;
		spell(num);
	}
	if(num >= 50 && num <=59)
	{
		cout<<" fifty";
		int n1 = num % 10;		
		num = n1;
		spell(num);
	}
	if(num >= 60 && num <=69)
	{
		cout<<" sixty";
		int n1 = num % 10;		
		num = n1;
		spell(num);
	}
	if(num >= 70 && num <=79)
	{
		cout<<" seventy";
		int n1 = num % 10;		
		num = n1;
		spell(num);
	}
	if(num >= 80 && num <=89)
	{
		cout<<" eighty";
		int n1 = num % 10;		
		num = n1;
		spell(num);
	}
	if(num >= 90 && num <=99)
	{
		cout<<" ninety";
		int n1 = num % 10;		
		num = n1;
		spell(num);
	}



}
