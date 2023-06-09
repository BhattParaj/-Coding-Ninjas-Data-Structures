// Second Largest
// Send Feedback
// Take input a stream of n integer elements, find the second largest element present.
// The given elements can contain duplicate elements as well. If only 0 or 1 element is given, the second largest should be INT_MIN ( - 2^31 ).
// Input format :

// Line 1 : Total number of elements (n)

// Line 2 : N elements (separated by space)

// Sample Input 1:
//  4
//  3 9 0 9
// Sample Output 1:
//  3
// Sample Input 2 :
//  2
//  4 4
// Sample Output 2:
//  -2147483648
// Sample Output Explanation:
// Since both the elements are equal here, hence second largest element is INT_MIN i.e. ( -2^31 )


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; 
    cin >> n;
    
    int a[n];
    int max = INT_MIN, smax = INT_MIN;
    for (int i = 0; i a< n; i++) {
      cin >> a[i];
    }

    sort(a, a+n);
    for(int i = 0; i < n; i++){
        // cin >> a[i];
        if(a[i] > max || a[i] > smax){
            smax = max;
            max = a[i];
            // cout << min << endl;
        }
    }

    if(smax == max){
        cout << INT_MIN << endl;
    }
    else{
        cout << smax << endl;
    }
    
    

    return 0;
}

// include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// #include <climits>

// int main(){
    
//     // Write your code here
//     int n;
//     cin>>n;
//     int a[n];
    
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//     }
    
  
//     int max=INT_MIN,smax=INT_MIN;
//     for(int i=1;i<=n;i++){
//         if(a[i]>max){
//             smax=max;
           
//             max=a[i];
//         }
//         else if(a[i]>smax && a[i]!=max){
//             smax=a[i];
//         }
//     }
    
//        cout<<smax<<endl;
//     }




