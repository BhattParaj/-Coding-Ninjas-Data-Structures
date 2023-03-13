// Print the following pattern
// Pattern for N = 4


// The dots represent spaces.



// Input Format :
// N (Total no. of rows)
// Output Format :
// Pattern in N lines
// Sample Input :
// 5
// Sample Output :


// The dots represent spaces.

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 1;
    int y = n-1;
    for(int i = 1; i <= n; i++){
        for(int j = y; j > 0; j--){
            cout << " ";
        }
        for(int j = x; j <= x+i-1; j++){
            cout << j ;
        }
        y--;
        x++;
        cout << endl;
    }

    return 0;
}
