#include <iostream>
using namespace std;

int main()
{
    // Primitive Datatype
    void v();
    int m,o = 1;
    const int n = 5;
    // int i = j = 9;  // should not
    // int n = 5;      // [int n =5 ] => don't declare multiple times
    m = o = 10;         // new update get stores
                        // n = 6  > error 
    cout << n << "\n" << o;
    int a = 5;
    double b = 5.5;
    char C,c = 'C';
    C = 67;
    wchar_t w = 'A';
    string d = "STRING_type";
    bool e = true;              // e = 1
    cout << "\n\nint a = " << a     // don't care the spaces
        << "\ndouble b = " << b 
        << "\nchar c = " << c 
        << "\nchar C = " << C  // char C = 67;
        << "\nwchar_t w = " << w
        << "\nstring d = " << d 
        << "\nbool e = " << e 
        << "\nsizeof( int a) : " << sizeof(a) << endl;

}
