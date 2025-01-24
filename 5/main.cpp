#include <iostream>

using namespace std;

int main()
{
    int a , b , c;

    cout << " a sonni kiriting : ";
    cin >> a;
    cout << " b sonni kiriting : ";
    cin >> b;
    cout << " c sonni kiriting : ";
    cin >> c;

    int zaxira = a + b + c;
    int aYangi = zaxira - a - c;
    int bYangi = zaxira - b - a;
    int cYangi = zaxira - c - b;


    cout << " a ning yangi qiymati : " << aYangi << endl;
    cout << " b ning yangi qiymati : " << bYangi << endl;
    cout << " c ning yangi qiymati : " << cYangi
     << endl;

    return 0;
}
