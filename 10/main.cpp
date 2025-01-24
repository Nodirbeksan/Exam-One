#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << " a sonni kiriting : ";
    cin >> a;

    int a2 = a * a;
    int a4 = a2 * a2;
    int a7 = a4 * a2 * a;

    cout << " bu sonning yettinchi darajasi : " << a7 << endl;
    return 0;
}
