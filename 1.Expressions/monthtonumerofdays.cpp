#include<bits/stdc++.h>
using namespace std;
int main()
{
	string monthname;
	cout<<"enter month name: ";
	cin>>monthname;
	if(monthname=="january"||monthname=="march"||monthname=="may"||monthname=="july"||monthname=="september"||monthname=="november")
	{
		cout<<" the number of days in this month is : 30";
	}
	else if(monthname=="february")
	{
		cout<<" the number of days in this month is : 28";
	}
	else{
		cout<<" the number of days in this month is : 31";
	}
	return 0;
}
