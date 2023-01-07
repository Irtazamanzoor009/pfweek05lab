#include<iostream>
using namespace std;

int check(int number);

main()
{
while(true)
{
	int number;
	cout<<"Enter a number: ";
	cin>>number;

	check(number);	

	int result = check(number);
	if(result % 2 == 0)
	{
		cout<<"Number is Evenish."<<endl;	
	}
	if(result % 2 != 0)
	{
		cout<<"Number is Oddish."<<endl;
	}
}

}

int check(int number)
{
	int sum;
	int num1 = number % 10;
	int num2 = (number / 10) % 10;
	int num3 = (number / 100) % 10;
	int num4 = (number / 1000) % 10;
	int num5 = (number / 10000) % 10;

	sum = num1 + num2 + num3 + num4 + num5;

	return sum;

	

}