#include<bits/stdc++.h>
using namespace std;
int main()
{
	int feet,inch;
	float miles,yards;
	cout<<"enter measurement in feet : ";
	cin>>feet;
	inch = feet*12;
	cout<<"\n in inches: "<<inch;
	yards=feet*0.333;
	cout<<"\n in yards: "<<yards;
	miles=feet*0.000819;
	cout<<"\n in miles: "<<miles;
	return 0;
}
