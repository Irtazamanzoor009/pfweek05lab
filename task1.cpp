#include<iostream>
#include<cmath>

using namespace std;

float calculateheight(float base, float degree);


main()
{
	float base, degree, result;
	cout<<"Enter base: ";
	cin>>base;
	cout<<"Enter degree: ";
	cin>>degree;

	result = calculateheight(base, degree);
	cout<<"Height is: "<<result<<endl;


}

float calculateheight(float base, float degree)
{
	float radian = degree / 57.2958;
	float angle = tan(radian);
	float height = base * angle;
	
	return height;

}
