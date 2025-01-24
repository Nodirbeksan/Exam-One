#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int a, b;

    cout << "a sonni kiriting : ";
    cin >> a;
    cout << "b sonni kiriting : ";
    cin >> b;

    int sutka = a * 24 * 60;
    int soat = b * 60;
    int natija = sutka + soat;

    cout << "Natija : " << natija << endl;

     main();
    return 0;
}
