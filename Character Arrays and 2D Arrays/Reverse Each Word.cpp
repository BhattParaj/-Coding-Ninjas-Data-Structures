// Reverse Each Word
// Send Feedback
// Aadil has been provided with a sentence in the form of a string as a function parameter. The task is to implement a function so as to print the sentence such that each word in the sentence is reversed.
// Example:
// Input Sentence: "Hello, I am Aadil!"
// The expected output will print, ",olleH I ma !lidaA".
// Input Format:
// The first and only line of input contains a string without any leading and trailing spaces. The input string represents the sentence given to Aadil.
// Output Format:
// The only line of output prints the sentence(string) such that each word in the sentence is reversed. 
// Constraints:
// 0 <= N <= 10^6
// Where N is the length of the input string.

// Time Limit: 1 second
// Sample Input 1:
// Welcome to Coding Ninjas
// Sample Output 1:
// emocleW ot gnidoC sajniN
// Sample Input 2:
// Always indent your code
// Sample Output 2:
// syawlA tnedni ruoy edoc

#include<bits/stdc++.h>
int length(char input[])
{
    int c = 0;
    for(int i = 0; input[i] != '\0'; i++)
    {
        c++;
    }
    return c;
}
void reverseEachWord(char input[]) {
    // Write your code here
   int c = 0;
    
    int n = length(input);
    //cout << n << endl;
    int p = 0;
    int u = 0;
    for(int i = 0; i < n; i = i + c )
    {
        
        c = 0;
        for(int j = i; input[j] != '\0'; j++)
        {
            if(input[j] != ' ')
            {
                c++;
            }
            else
            {
                break;
            }
            
        }
        
        
        u = u + c;
        p = u-1;
        int j = i;
        while(j < p)
        {
            swap(input[j], input[p]);
            j++;
            p--;
        }
        u++;
        i++;
        //cout << c << endl;
    }
}