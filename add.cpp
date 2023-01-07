#include<iostream>
using namespace std;

int add(int number1, int number2);
float divide(float number1, float number2);

main()
{
	int number1, number2;
	cout<<"Enter number 1: ";
	cin>>number1;
	cout<<"Enter number 2: ";
	cin>>number2;

	int sum = add(number1, number2);
	cout<<"Sum is: "<<sum<<endl;

	float result = divide(number1, number2);
	cout<<"Division is: "<<result<<endl;



}

int add(int number1, int number2)
{
	
	int sum = number1 + number2;
	return sum;

}

float divide(float number1, float number2)
{
	
	float result = number1 / number2;
	return result;

}