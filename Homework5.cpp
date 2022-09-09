#include <iostream>
using namespace std;
//swap function with pointers//
void swap (double *num1, double *num2)
{
 double temp;
temp = *num1;
*num1 = *num2;
*num2 = temp;
}

 
int main()
{
    double input1,input2;
    cout<<"enter your first number\n";
    cin>>input1;
    cout<<"enter your second number\n";
    cin>>input2;
    swap(&input1,&input2);
    cout<<"observation:::::\n";
    cout<<"number one is now ----->>>>>\n"<<input1<<endl;
    cout<<"number two is now ----->>>>>\n"<<input2<<endl;
    return 0;
}









