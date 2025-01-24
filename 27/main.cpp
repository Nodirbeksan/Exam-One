#include <iostream>

using namespace std;

int main()
{
    int N;
    cout << " sekundni kiritiiing : ";
    cin >> N;

    int kun = N / 3600 / 24;
    int soat = N / 3600;

    cout << kun << endl;
    cout << soat << endl;
    cout << N << endl;
    return 0;
}
