#include <bits/stdc++.h>
using namespace std;
int main(){
double cost;
cout<<"enter :  \n";
cin>>cost;
double tax = ((18*cost)/100);
double tip = ((5*cost)/100);
cout<<tax<<" "<<tip<<" "<<tax+tip<<"\n";
return 0;
}

