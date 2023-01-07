#include<iostream>
using namespace std;

int add(int,int);
float divide(float,float);

main()
{
	int number1, number2;
	cout<<"Enter number 1: ";
	cin>>number1;
	cout<<"Enter number 2: ";
	cin>>number2;

	int sum = add(number1,number2);
	cout<<"Sum is: "<<sum<<endl;

	float result = divide(number1,number2);
	cout<<"Division is: "<<result<<endl;



}

int add(int number_1,int number_2)
{

	
	int sum = number_1 + number_2;
	return sum;

}

float divide(float number_1,float number_2)
{

	
	float result = number_1 / number_2;
	return result;

}