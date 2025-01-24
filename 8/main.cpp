#include <iostream>

using namespace std;

int main()
{


    int num;
    cout << "4 xonali son kiriting :";
    cin >> num; /// 9582

    int minglar = num / 1000;
    int onlar = num / 10 % 10;

    cout << "minglar va onlar honasi kopaytmasi = " << minglar * onlar << endl;



    return 0;
}
