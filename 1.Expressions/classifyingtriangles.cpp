#include<bits/stdc++.h>
using namespace std;
int main()
{
	int side1,side2,side3;
	cout<<"enter three sides of a triangle: ";
	cin>>side1>>side2>>side3;
	if(side1==side2 && side2==side3)
	{
		cout<<"\n it is a equilateral triangle";
	}
	else if(side1==side2 && side3==side1)
	{
		cout<<"\n it is a isosecles triangle";
	}
	else
	{
		cout<<"\n it is a scalene triangle";
	}
	return 0;
}
