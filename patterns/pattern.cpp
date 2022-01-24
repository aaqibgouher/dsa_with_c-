#include <iostream>
using namespace std;

int main()
{
    /*
        pattern 1

        * * * *
        * * * *
        * * * *
        * * * *
    */
    // int i, j, n = 5;

    // for(i=1;i<=n;i++) {
    //     for(j=1;j<=n;j++) {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    /*
        pattern 2

        * * * *
        *     *
        *     *
        * * * *

    */

    // approach 1
    // int i, j, n = 4;
    // for(i=1;i<=n;i++) {
    //     for(j=1;j<=n;j++) {
    //         if(i==1 && j<=n || i==n & j<=n || j==1 && i<=n || j==n && i<=n ) {
    //             cout<<"* ";
    //         }else {
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // approach 2
    // int i, j, n = 4;
    // for(i=1;i<=n;i++) {
    //     for(j=1;j<=n;j++) {
    //         if(i==1 || i == n || j==1 || j==n) {
    //             cout<<"* ";
    //         }else {
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    /*
        pattern 3

        *
        * *
        * * *
        * * * *

    */

    // int i, j, n = 5;

    // for(i=1;i<=n;i++) {
    //     for(j=1;j<=i;j++) {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    /*
        pattern 4
        
        * * * *
        * * *
        * *
        *

    */

    // approach 1
    // int i, j, n = 5, count = n;

    // for(i=1;i<=n;i++) {
    //     for(j=1;j<=count;j++) {
    //         cout<<"* ";
    //     }
    //     count--;
    //     cout<<endl;
    // }

    // approach 2
    // int i, j, n = 5;

    // for(i=n;i>=1;i--) {
    //     for(j=1;j<=i;j++) {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    /*
        pattern 5

              *
            * *
          * * *
        * * * *

    */

    // int i, j, n = 4;

    // for(i=1;i<=n;i++) {
    //     for(j=1;j<=n;j++) {
    //         if(j <= n-i) {
    //             cout<<"  ";
    //         }else {
    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;
    // }

    /*
        pattern 6

        1 
        2 2
        3 3 3 
        4 4 4 4
        5 5 5 5 5

    */
    // int i, j, n = 5;

    // for(i=1;i<=n;i++) {
    //     for(j=1;j<=i;j++) {
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    /*
        floyd's triangle

        1
        2 3
        4 5 6
        7 8 9 10

    */

    // int i, j, n = 4, count = 1;

    // for(i=1;i<=n;i++) {
    //     for(j=1;j<=i;j++) {
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }

    /*
        butterfly pattern

        *         *
        * *     * *
        * * * * * *
        * * * * * *
        * *     * *
        *         *
    */

    return 0;
}