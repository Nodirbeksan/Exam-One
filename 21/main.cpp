#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << " 3 xonali son kiriting : " ;
    cin >> a;

    int yuzlik = a / 100;
    int onlik = a / 10 % 10;
    int birlik = a % 10;

    int natija = birlik * 100 + yuzlik * 10 + onlik ;
    cout << " natija = " << natija << endl;
    return 0;
}
