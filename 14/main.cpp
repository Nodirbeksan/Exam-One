#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << " a sonni kiriting : ";
    cin >> a;

    int yuzlik = a / 100;
    int onlik = a / 10 % 10;
    int birlik = a % 10;

    int natija = birlik * 100 + onlik * 10 + yuzlik;

    cout << " Natija : " << natija << endl;
    return 0;
}
