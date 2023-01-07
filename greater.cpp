#include<iostream>
using namespace std;

int isGreater(int number1, int number2);
int isMinimum(int number1, int number2);

main()
{
	int num1, num2;
	int result;

	cout<<"Enter number 1: ";
	cin>>num1;
	cout<<"Enter number 2: ";
	cin>>num2;

	result = isGreater(num1, num2);
	cout<<result << " is greater number " <<endl;

	result = isMinimum(num1, num2);
	cout<<result << " is a minimum number "<<endl;



}

int isGreater(int number1, int number2)
{
	if(number1 > number2)
	{
		return number1;
	}
	if(number2 > number1)
	{
		return number2;
	}	

	return 0;


}

int isMinimum(int number1, int number2)
{
	if(number1 < number2)
	{
		return number1;
	}
	if(number2 < number1)
	{
		return number2;
	}

	return 0;

}