#include <iostream>
using namespace std;

int main()
{
    /*
        1 2 3 4 5
        1 2 3 4
        1 2 3
        1 2
        1

    */
    // int i, j, n = 5;

    // for (i = n; i >= 1; i--)
    // {
    //     int count = 1;
    //     for (j = 1; j <= i; j++)
    //     {
    //         cout << count << " ";
    //         count++;
    //     }
    //     cout << endl;
    // }

    /*
        1
        0 1
        1 0 1
        0 1 0 1
        1 0 1 0 1

    */

    // int i, j, n = 5;

    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= i; j++)
    //     {
    //         if ((i + j) % 2 == 0)
    //         {
    //             cout << "1 ";
    //         }
    //         else
    //         {
    //             cout << "0 ";
    //         }
    //     }
    //     cout << endl;
    // }

    /*
        rhombus patter

        ___*_*_*_*
        __*_*_*_*
        _*_*_*_*
        *_*_*_*

    */

    // int i, j, n = 4;

    // for (i = n; i >= 1; i--)
    // {
    //     for (j = 1; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (j = 1; j <= n; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    /*

            1
           1 2
          1 2 3 
         1 2 3 4
        1 2 3 4 5

    */

    // int i, j, n = 8;

    // for (i = 1; i <= n; i++)
    // {
    //     //    print spaces
    //     for (j = 1; j <= n - i; j++)
    //     {
    //         cout << "_ ";
    //     }
    //     for (j = 1; j <= i; j++)
    //     {
    //         cout << j << "   ";
    //     }
    //     cout << endl;
    // }

    /*

            1
          2 1 2
        3 2 1 2 3
      4 3 2 1 2 3 4

    */

    int i, j, n = 4;

    for (i = 1; i <= n; i++)
    {
        //    printing spaces
        for (j = 1; j <= n - i; j++)
        {
            cout << "_ ";
        }
        int k = i;
        int flag = 1;
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (flag == 1)
            {
                cout << k << " ";
                k--;
                if (k == 0)
                {
                    flag = 0;
                    k = 1;
                }
            }
            else
            {
                k++;
                cout << k << " ";
            }
        }

        cout << endl;
    }

    return 0;
}