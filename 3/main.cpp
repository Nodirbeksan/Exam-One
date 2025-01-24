#include <iostream>

using namespace std;

int main()
{
    int a , b;

    cout << " a tomonni kiriting : ";
    cin >> a;
    cout << " b tomonni kiriting : ";
    cin >> b;

    int S = a * b;
    int P = (a + b) * 2;

    cout << " tortburchakning yuzi : " << S << endl;
    cout << " tortburchakning perimetri : " << P << endl;
    return 0;
}
