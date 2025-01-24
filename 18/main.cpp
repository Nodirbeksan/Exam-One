#include <iostream>

using namespace std;

int main()
{
    int N;

    cout << " sekundlarni kiriting : ";
    cin >> N;

    int soat = N / 3600;
    int minut = N / 3600 % 60;

    cout << N << " sekund = " << soat << " soat " << minut << " minutga teng " << endl;
    return 0;
}
