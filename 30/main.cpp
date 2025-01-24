#include <iostream>

using namespace std;

int main()
{
    double kb;
    cout << " fayl hajmini kriting (kb) :";
    cin >> kb;

    double charact = (kb * 1024)/2;
    cout << charact << " ta belgi mavjud " << endl;
    return 0;
}
