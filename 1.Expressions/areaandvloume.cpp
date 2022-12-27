#include<bits/stdc++.h>
using namespace std;
int main()
{
	int radius;
	cout<<"enter the radius: "<<"\n";
	cin>>radius;
	float areaofcircle,volumeofsphere;
	areaofcircle=3.14*radius*radius;
	cout<<"area of circle is: "<<areaofcircle<<"\n";
	volumeofsphere=(4/3)*3.14*radius*radius*radius;
	cout<<"volume of sphere is: "<<volumeofsphere<<"\n";
	return 0;
}
