#include<iostream>
using namespace std;

int hour(int hours);
int minute(int min);


int hours;

main()
{
while(true)
{
	int min;
	cout<<" Enter hours: ";	
	cin>>hours;
	cout<<" Enter minutes: ";
	cin>>min;

	int result = minute(min);
	int result2 = hour(hours);

	cout<<result2<<":"<<result<<endl;

}


}

int minute(int min)
{
	int minutes = min + 15;
	if(minutes > 59)
	{
		minutes = minutes - 60;
		hours = hours + 1;
		
	}
	return minutes;

}
int hour(int hours)
{
	
	if(hours > 23)
	{
		return 0;
	}

	return hours;


}