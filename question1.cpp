#include <iostream>
using namespace std;
//program for calculating perimeter and surface area of a circle using user-def functions and forward decalaration//
double peri(double r,double pi);
double area(double r,double pi);

//body of code//

int main()
{
 double r,numb=3.14;
 cout<<"please enter your circle radius"<<endl;
 cin>>r;
 double z=peri(r,numb);
 double z2=area(r,numb);
 cout<<"this is your perimeter"<<z<<endl;
 cout<<"this is your area"<<z2<<endl;

 return 0;
}
//first function to return perimeter//
double peri(double x,double y)
{
double P;
    
  P=2*y*x;
  
return P;
}
//second function to return surface area//
double area(double radius,double c)
{
double S;
S=c*(radius*radius);
return S;
}

//known issues: 1. did I write the forward calling correctly? 2. had to debug multiple times due to parameters
//3. how can I have one function but multiple returns?? 4. fundamentals of defining parameters.//