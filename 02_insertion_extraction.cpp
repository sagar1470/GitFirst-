  // operator overloading
#include <iostream>
using namespace std;

class calc
{
public:
    int a;
    int b;
};
void operator>>(istream &sin, calc &s)
{
    sin >> s.a;
    sin >> s.b;
}
void operator<<(ostream &sout, calc &s)
{
    sout << s.a << endl;
    sout << s.b << endl;
}
int main()
{
    calc c1, c2;
    cout << "enter the value for a and b " << endl;
    cin >> c1;
    cout << c1;

    return 0;
}