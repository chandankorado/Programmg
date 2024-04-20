#include<iostream>
using namespace std;

int main()
{
    int n,i ,j ;
    cout << "Enter a Integer Value : ";
    cin >> n;
    cout << ends << "Integer is : "<< n;
    cout << "\n\nEnter a Integer Values i j  : ";
    cin >> i >> j;  // wcin also taken
    cout << ends << " \ni j  are :  " << i << "\t" << j ;   // << '  '   - should not taken 

}