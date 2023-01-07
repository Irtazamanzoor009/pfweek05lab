#include<iostream>
using namespace std;

void check(int volume, int pipe1, int pipe2, float hours);


main()
{
	int volume, pipe1, pipe2;
	float hours;
	cout<<"Enter the volume of Pool: ";
	cin>>volume;
	cout<<"Enter the flow rate from pipe 1: ";
	cin>> pipe1;
	cout<<"Enter the flow rate from pipe 2: ";
	cin>> pipe2;
	cout<<"Enter the hours that worker is absent: ";
	cin>>hours;

	check(volume, pipe1, pipe2, hours);

    
}

void check(int volume, int pipe1, int pipe2, float hours)
{
	int sumofpipes = pipe1 + pipe2;
	
	if(sumofpipes < volume)
{
	float p1 = pipe1 * hours;	
	float p2 = pipe2 * hours;	
	float sum = p1 + p2;
	float percentage = (sum*100)/volume;
	
	float conp1 = (p1 * 100)/sum;
	float conp2 = (p2 * 100)/sum;

	cout<<"The pool is " <<percentage<<" % full"<<endl;
	cout<<"Pipe 1: "<<conp1<< "%"<<endl;
	cout<<"Pipe 2: "<<conp2<< "%"<<endl; 
	
}	
	
	if (sumofpipes > volume)
	{
		float p1 = pipe1 * hours;	
		float p2 = pipe2 * hours;
		float sum = p1 + p2;
		float overflow = sum - volume;
		cout<<"For "<<hours<<" hours the pool overflows with "<<overflow<<" litres.";
	}



}