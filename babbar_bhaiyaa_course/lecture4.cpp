// patterns
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

    // int n = 4;
    // int ch = 'A';

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << char(ch + i) << " ";
    //     }
    //     cout << endl;
    // }

    // 10.
    /*

        A B C D
        A B C D
        A B C D
        A B C D

    */

    // int n = 4;
    // char ch = 'A';

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << char(ch + j - 1) << " ";
    //     }
    //     cout << endl;
    // }

    // 11.
    /*

        A B C D
        E F G H
        I J K L
        M N O P

    */

    // int n = 4, counter = 0;
    // char ch = 'A';

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << char(ch + counter) << " ";
    //         counter++;
    //     }
    //     cout << endl;
    // }

    // 12.
    /*

        A B C
        B C D
        C D E

         or
        1 2 3
        2 3 4
        3 4 5

    */
    // for integer
    // int n = 5, counter = 0;

    // for (int i = 1; i <= n; i++)
    // {
    //     counter = i;
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << counter << " ";
    //         counter++;
    //     }
    //     cout << endl;
    // }

    // for characters
    // int n = 5, counter = 0;
    // int ch = 'A';

    // for (int i = 1; i <= n; i++)
    // {
    //     counter = i;
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << char(ch + counter - 1) << " ";
    //         counter++;
    //     }
    //     cout << endl;
    // }

    // 13.
    /*

        A
        B B
        C C C
        D D D D

    */

    // int n = 4;
    // int ch = 'A';

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << char(i + ch - 1) << " ";
    //     }
    //     cout << endl;
    // }

    // 14.
    /*

        A
        B C
        D E F
        G H I J

    */

    // int n = 4;
    // int ch = 'A';

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << char(ch) << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // 15.
    /*

        A
        B C
        C D E
        D E F G

    */

    // int n = 4, ch = 'A';

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << char(ch + i + j - 2) << " ";
    //     }
    //     cout << endl;
    // }

    // 16.
    /*

        D
        C D
        B C D
        A B C D

    */

    // int n = 4, ch = 'A' + n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << char(ch - (i - j) - 1) << " ";
    //     }
    //     cout << endl;
    // }

    // 17.
    /*

              *
            * *
          * * *
        * * * *

    */

    // int n = 4;

    // for (int i = 1; i <= n; i++)
    // {
    //     // printing spaces
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     // printing starts
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << '*' << " ";
    //     }
    //     cout << endl;
    // }

    // 18.
    /*

        * * * *
        * * *
        * *
        *

    */

    // int n = 4;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i + 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // 19.
    /*

        * * * *
          * * *
            * *
              *

    */

    // int n = 4;

    // for (int i = 1; i <= n; i++)
    // {
    //     // printing spaces
    //     for (int j = 1; j < i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     // printing star
    //     for (int j = 1; j <= n - i + 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // 20.
    /*

        1 1 1 1
          2 2 2
            3 3
              4

    */

    // int n = 4;

    // for (int i = 1; i <= n; i++)
    // {
    //     // space
    //     for (int j = 1; j <= i - 1; j++)
    //     {
    //         cout << "  ";
    //     }
    //     // numbers
    //     for (int j = 1; j <= n - i + 1; j++)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    // 21.
    /*

        1 2 3 4
          2 3 4
            3 4
              4

    */

    // int n = 4;

    // for (int i = 1; i <= n; i++)
    // {
    //     // space
    //     for (int j = 1; j <= i - 1; j++)
    //     {
    //         cout << "  ";
    //     }
    //     // numbers
    //     for (int j = 1; j <= n - i + 1; j++)
    //     {
    //         cout << i + j - 1 << " ";
    //     }
    //     cout << endl;
    // }

    // 22.
    /*

            1
          1 2 1
        1 2 3 2 1

    */
    // int n = 5, k;

    // for (int i = 1; i <= n; i++)
    // {
    //     // space
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     // numbers
    //     for (int j = 1; j <= 2 * i - 1; j++)
    //     {
    //         if (j <= i)
    //         {
    //             cout << j << " ";
    //             k = j;
    //         }
    //         else
    //         {
    //             k = k - 1;
    //             cout << k << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // 23. Dabangg pattern
    /*

        1 2 3 4 5 5 4 3 2 1
        1 2 3 4 * * 4 3 2 1
        1 2 3 * * * * 3 2 1
        1 2 * * * * * * 2 1
        1 * * * * * * * * 1

    */

    // int n = 5;

    // for (int i = 1; i <= n; i++)
    // {

    //     // printing left triangle
    //     for (int j = 1; j <= n - i + 1; j++)
    //     {
    //         cout << j << " ";
    //     }

    //     // printing middle triangle
    //     for (int j = 1; j <= 2 * (i - 1); j++)
    //     {
    //         cout << "* ";
    //     }

    //     // printing right traingle
    //     for (int j = n - i + 1; j > 0; j--)
    //     {
    //         cout << j << " ";
    //     }

    //     cout << endl;
    // }

    return 0;
}