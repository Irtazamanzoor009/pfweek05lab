#include<iostream>
#include<cmath>

using namespace std;



main()
{
	float num1; 
	float num2;
	float result;
	cout<<"Enter number: ";
	cin>>num1;
	cout<< "Enter number: ";
	cin>>num2;

	result = max(num1, num2);
	cout<<result<<" is maximum"<<endl;

	result = min(num1, num2);
	cout<<result<<" is minimum"<<endl;




}
