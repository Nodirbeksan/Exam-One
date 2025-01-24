#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    float a, b;
    cout << "a sonini kiriting :";
    cin >> a;
    cout << "b sonini kiriting :";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a soni  ---> " << a << endl;
    cout << "b soni  ---> " << b << endl;

    return 0;
}
