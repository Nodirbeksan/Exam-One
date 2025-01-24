#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter Number: \n number danger 2^32 :";
    cin >> n;


    while(n != 0)
    {
        int endNum = n % 10;
        if(endNum == 3)
        {
            cout << boolalpha << true << endl;
            break;
        }

        n /= 10;
    }


    return 0;
}
