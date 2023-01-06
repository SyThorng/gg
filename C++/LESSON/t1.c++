#include <iostream>
using namespace std;
int main()
{
    int a, b, c;

    cout << "input A: ";
    cin >> a;
    cout << "input B: ";
    cin >> b;
    cout << "input C: ";
    cin >> c;

    if (c > a && c > b || b > a && b < c)
    {
        cout << "C: " << c << endl;
        cout << "B: " << b << endl;
        cout << "A: " << a << endl;
    }
    else if (b > c && b > a || c > a && c < b)
    {
        cout << "B: " << b << endl;
        cout << "C: " << c << endl;
        cout << "A: " << a << endl;
    }
    else if (a > c && a > b || b > c && b < a)
    {
        cout << "A: " << a << endl;
        cout << "B: " << b << endl;
        cout << "C: " << c << endl;
    }
}