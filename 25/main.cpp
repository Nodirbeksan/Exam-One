#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double kilobayt = 750;
    double faylsizegb = 1.8;
    double faylsizekb = faylsizegb * pow(2,20);
    cout << faylsizekb / kilobayt << endl;



    return 0;
}
