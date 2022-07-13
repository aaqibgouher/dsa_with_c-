// conditional statement & loops
#include <iostream>

using namespace std;

int main()
{

    // 1. CONDITIONAL STATEMENT

    // 1.1 if block
    // int a = 10, b = 10;

    // if (a > b)
    // {
    //     cout << "a is greater than b";
    // }

    // if (a < b)
    // {
    //     cout << "a is smaller than b";
    // }

    // if (a == b)
    // {
    //     cout << "a is equal to b";
    // }

    // 1.2 if else
    // int a = 15, b = 10;

    // if (a > b)
    // {
    //     cout << "a is greater that b";
    // }
    // else
    // {
    //     if (a == b)
    //     {
    //         cout << "a is equal to b";
    //     }
    //     else
    //     {
    //         cout << "a is smaller than b";
    //     }
    // }

    // 1.3 else if ladder
    // int a = 10, b = 5;

    // if (a > b)
    // {
    //     cout << "a is greater than b";
    // }
    // else if (a < b)
    // {
    //     cout << "a is smaller than b";
    // }
    // else
    // {
    //     cout << "a is equal to b";
    // }

    // 2. HOMEWORK:- check given number is lowercase(a - z), uppercase(A-Z) or digits(0 - 9)
    // char character;

    // cout << "enter your character:" << endl;
    // cin >> character;

    // if (character >= 97 && character <= 122)
    // {
    //     cout << "lowercase";
    // }
    // else if (character >= 65 && character <= 90)
    // {
    //     cout << "uppercase";
    // }
    // else
    // {
    //     cout << "digits";
    // }

    // 3. LOOPS
    // 3.1 while loop

    // int n = 1, flag;

    // cout << "enter the number" << endl;
    // cin >> flag;

    // while (n <= flag)
    // {
    //     cout << n << endl;
    //     n++;
    // }

    // 3.2 for loop

    // int n = 1, flag;

    // cout << "enter the number:" << endl;
    // cin >> flag;

    // for (n = 1; n <= flag; n++)
    // {
    //     cout << n << endl;
    // }

    // 3.3 do while loop

    // int i = 1, flag;

    // cout << "enter the number:" << endl;
    // cin >> flag;

    // do
    // {
    //     cout << i << endl;
    //     i++;
    // } while (i <= flag);

    // 4. QUESTION:-
    // 4.1 sum of n numbers
    // int n, sum = 0;

    // cout << "enter the nth number" << endl;
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }

    // cout << "sum of first " << n << " numbers are " << sum;

    // 4.2 sum of even numbers
    // int n, sum = 0;

    // cout << "enter the nth number" << endl;
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         sum += i;
    //     }
    // }

    // cout << "sum of all even numbers till " << n << " are " << sum;

    // 4.3 prime number
    // int n, flag = false;

    // cout << "enter the number" << endl;
    // cin >> n;

    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         flag = true;
    //         break;
    //     }
    // }

    // if (flag)
    // {
    //     cout << "not a prime number";
    // }
    // else
    // {
    //     cout << "prime number";
    // }
    return 0;
}