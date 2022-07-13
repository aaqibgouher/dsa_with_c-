// operators
#include <iostream>
using namespace std;

int main()
{

    // 1. operators

    // 1.1 bitwise operator(and, or, not, xor)
    // int a = 4, b = 6;

    // cout << "a & b = " << (a & b) << endl;
    // cout << "a | b = " << (a | b) << endl;
    // cout << "~a = " << (~a) << endl;
    // cout << "a ^ b = " << (a ^ b) << endl;

    // 1.2 shift operator
    // cout << (17 >> 1) << endl;
    // cout << (17 >> 2) << endl;
    // cout << (19 << 1) << endl;
    // cout << (21 << 2) << endl;

    // 2. fibonacci series
    // 0 1 1 2 3 5 8 13 ----
    int first = 0, second = 1, n;

    cout << "enter the value of n:" << endl;
    cin >> n;

    if (n == 1)
    {
        cout << first << " ";
    }
    else if (n == 2)
    {
        cout << first << " " << second << " ";
    }
    else if (n > 2)
    {
        cout << first << " " << second << " ";
        for (int i = 1; i <= n - 2; i++)
        {
            int sum = first + second;
            cout << sum << " ";
            first = second;
            second = sum;
        }
    }

    return 0;
}