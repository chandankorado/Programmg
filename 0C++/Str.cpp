#include <iostream>
using namespace std;

int main()
{
    int i,time = 10;
    string str,str2,str1, str0 = "chandan";
    str1 = " korado";
    str = str0 + str1;
    cout << str;
    str2 = str0.append(str1);
    cout << endl << str2;
    cout << str2.size();
    if (time < 18)
        cout << "Good day.";
    for (int i = 0; i < 5; i++)
        cout << i << "\n";
    cout << i;
    for (int i = 0; i < 5; ++i)
        cout << i << "\n";
    cout << i;

    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int j : myNumbers)
        cout << j << "\n";
}
