#include <iostream>

using namespace std;

int main()
{
    int a , b;

    cout << " haftani kiriting : " ;
    cin >> a;
    cout << " sutkani kiriting : " ;
    cin >> b;

    int haftasoat = ((a * 7) + b) * 24;

    cout << haftasoat << endl;

    return 0;
}
