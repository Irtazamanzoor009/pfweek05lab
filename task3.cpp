#include<iostream>
using namespace std;

bool symm(int num);

main()
{
while(true)
{
	int num;
	cout<<"Enter a three digit number: ";
	cin>>num;


	bool result = symm(num);

	if(result == true)
	{
		cout<<"Numbers are symmetrical"<<endl;
	}
	if(result == false)
	{
		cout<<"Numbers are not symmetrical"<<endl;
	}
}	



}

bool symm(int num)
{
	int number1 = num % 10;
	int result1 = number1;
	int number2 = num / 100;
	int result2 = number2;
	
	if(result1 == result2)
	{
		return true;
	}
	if(result1 != result2)
	{
		return false;
	}
	
	return 0;


}