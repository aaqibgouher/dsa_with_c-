#include <iostream>

using namespace std;

int main()
{
    // PATTERN

    // 1.
    /*

     * * * *
     * * * *
     * * * *
     * * * *

     */

    // int row, column;

    // cout << "enter rows and column:" << endl;
    // cin >> row >> column;

    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= column; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // 2.
    /*

        1 1 1 1
        2 2 2 2
        3 3 3 3

    */

    // int row = 4, column = 4;

    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= column; j++)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    // 3.
    /*

        1 2 3 4
        1 2 3 4
        1 2 3 4
        1 2 3 4

    */

    // int row = 4, column = 4;

    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= column; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // 4.
    /*

        4 3 2 1
        4 3 2 1
        4 3 2 1
        4 3 2 1

    */

    // int n = 4;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << n - j + 1 << " ";
    //     }
    //     cout << endl;
    // }

    // 5.
    /*

        1 2 3 4
        5 6 7 8
        9 10 11 12
        13 14 15 16

    */

    // int n = 4, count = 1;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << count << "  ";
    //         count++;
    //     }
    //     cout << endl;
    // }

    // 6.
    /*

        *
        * *
        * * *
        * * * *

    */

    // int n = 4;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // 7,
    /*
        1
        2 3
        4 5 6
        7 8 9 10

    */

    // int n = 4, count = 1;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << count << " ";
    //         count++;
    //     }
    //     cout << endl;
    // }

    // 8.
    /*

        1
        2 1
        3 2 1
        4 3 2 1

    */

    // int n = 4, count;

    // for (int i = 1; i <= n; i++)
    // {
    //     count = i;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << count << " ";
    //         count--;
    //     }
    //     cout << endl;
    // }

    // 9.
    /*

        A A A
        B B B
        C C C

    */

    int n = 4;
    char ch = 65;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << char(ch) << " ";
        }
        cout << endl;
    }

    return 0;
}