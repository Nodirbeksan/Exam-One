#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << " 4 xonali sonni kiriting : ";
    cin >> a;

    int yuzlik = a / 100 % 10;
    int onlik = a % 100 / 10;
    int birlik = a % 10;
    int minglik = a / 1000;

    int natija = onlik *  birlik * yuzlik * minglik;

    cout << " Natija : " << natija << endl;
    return 0;
}
