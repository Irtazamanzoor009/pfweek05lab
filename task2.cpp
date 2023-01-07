#include<iostream>
#include<cmath>

using namespace std;

float positive(float a, float b, float c);
float negative(float a, float b, float c);

main()
{
	float a,b,c;
	cout<<"Enter the value of 'a': ";
	cin>> a;
	cout<<"Enter the value of 'b': ";
	cin>>b;
	cout<<"Enter the value of 'c': ";
	cin>>c;

	float result = positive(a,b,c);
	cout<<"X is "<<result<<endl;
	
	result = negative(a,b,c);
	cout<<"X is "<<result<<endl;



}

float positive(float a, float b, float c)
{
	float disc = (pow(b,2))-4*a*c;
	float equation = ((-b) + sqrt(disc));
	float equation2 = equation/(2*a);
	return equation2;

}

float negative(float a, float b, float c)
{
	float disc = (pow(b,2))-4*a*c;
	float equation = ((-b) - sqrt(disc));
	float equation2 = equation/(2*a);
	return equation2;

}
