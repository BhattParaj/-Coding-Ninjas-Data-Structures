// Pyramid Number Pattern
// Send Feedback
// Print the following pattern for the given number of rows.
// Pattern for N = 4
//    1
//   212
//  32123
// 4321234
// Input format : N (Total no. of rows)

// Output format : Pattern in N lines

// Sample Input :
// 5
// Sample Output :
//         1
//        212
//       32123
//      4321234
//     543212345


#include <iostream>

using namespace std;

int main()
{
    int n; 
    cin >> n;
    
    for(int i = 1 ; i <= n; i++){
        for(int j = n-i-1; j >=0; j--){
            cout << " ";
        }
        for(int j = i; j >= 1; j--){
            cout << j;
        }
        if(i>=2){
            for(int j = 2; j <=i; j++){
                cout << j;
            }
        }
        cout << endl;
    }


    return 0;
}
