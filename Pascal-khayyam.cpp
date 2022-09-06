#include <iostream>
using namespace std;
//welcome to pascal-khayyam triangle program//
int main()
{
int rows;
cout<<"please enter the desired number of rows for the triangle"<<endl;
cin>> rows;

for (int i = 0; i < rows; i++)
    {
        int val = 1;
        for (int j = 1; j < (rows - i); j++)
        {
            cout << "   ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "      " << val;
            val = val * (i - k) / (k + 1);
        }



    
}
return 0;
}
//how do i trim it? the triangle doesn't form properly and it is all over the place//