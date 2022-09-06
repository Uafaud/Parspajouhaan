#include <iostream>
#include <vector>
using namespace std;
//write a function to receive two arrays and find duplicate elements//
//using forward calling//
auto Duplicate1(vector<double> A[],int ARR_number);

int main()
{





return 0;
}

auto Duplicate1(vector <double> x[],vector <double>y[])
{

double input1,input2;
int limiter,limiter2;
cout<<"Enter how many arrays you wish to enter:"<<endl;
cin>>limiter;

cout<<"now enter your array elements"<<endl;
for (int i=0;i<=limiter;i++)
{
    cout<<"please enter maximum 10 figures for your first array"<<endl;
    cin>>input1;
    x[i].push_back(input1);
    
}

cout<<"enter how many array elements you wish to enter in the vector for second array"<<endl;
cin>>limiter2;

for (int j=0;j<=limiter2;j++)
{
    cout<<"please enter maximum 10 figures for your first array"<<endl;
    cin>>input1;
    x[j].push_back(input1);
    
}


}





