// Print the following pattern
// Pattern for N = 4



// The dots represent spaces.



// Input Format :
// N (Total no. of rows)
// Output Format :
// Pattern in N lines
// Constraints :
// 0 <= N <= 50
// Sample Input 1 :
// 3
// Sample Output 1 :
//    *
//   *** 
//  *****
// Sample Input 2 :
// 4
// Sample Output 2 :
//     *
//    *** 
//   *****
//  *******

#include <iostream>

using namespace std;

int main()
{
    int x = 1;
    int n;
    cin >> n;
    int y = n-1;
    for(int i = 1; i <= n; i++){
        for(int j = y; j > 0; j--){
            cout << " ";
        }
        for(int k = 1; k <= 2*i-1; k++){
            cout << "*";
        }
        y--;
        cout << endl;
    }
    return 0;
}
