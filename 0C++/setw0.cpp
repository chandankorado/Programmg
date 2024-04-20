#include <iostream>     
#include <iomanip>   
using namespace std;
int main ()
{


  double float_value =3.14159;
  cout << setprecision(4) << float_value << '\n';
  cout << setprecision(9) << float_value << '\n';
  cout << fixed;
  cout << setprecision(5) << float_value << '\n';
  cout << setprecision(10) << float_value << '\n';

  cout << "The number printed with width 10"<<endl;
  cout << setw(10);
  cout << 77 << endl;
   
  cout << "The number printed with width 2"<<endl;
  cout << setw(2) << 10 << endl;
   
  cout << "The number printed with width 5"<<endl;
  cout << setw(5) << 25 << endl;

  cout << setfill ('*') << setw (10);
  cout << 15 << endl;
  cout << setfill ('#') << setw (5) << 5 << endl;
  cout << setfill ('#') << setw (5) << 1 << endl;
  cout << setfill ('*') << setw (10) << 25 << endl;
  return 0;
}