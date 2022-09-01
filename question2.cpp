#include <iostream>
using namespace std;
//program for comparing two arrays and extracting and summarising//
int main()
{
    double M[10],F[10],Final,Sum;
cout<<"Please enter your male student's grades(max 10)"<<endl;
for (int i=0;i<=9;i++)
{
cin>>M[i];
}
cout<<"please enter your female student's grades(max 10)"<<endl;
for (int j=0;j<=9;j++) 
{
cin>>F[j];
}
//displaying our filled arrays using loops//
cout<<"first row is male student's grades and second row is female student's grades"<<endl;
for (int m=0;m<=9;m++)
{
    cout<< M[m] <<"    /n";
}
//---------------//
//---------------//
for (int n=0;n<=9;n++)
{
    cout<<F[n]<<"   /n";
}
//finding same elements in arrays//

for (int c1=0;c1<=9;c1++)
{
    for (int c2=0;c2<=9;c2++)
    {
        if (M[c1]==F[c2])
        {
           Sum=M[c1]+F[c2];
           
        }
    }
}
cout<<"here is the sum of duplicate grades: "<<Sum<<endl;













return 0;
}