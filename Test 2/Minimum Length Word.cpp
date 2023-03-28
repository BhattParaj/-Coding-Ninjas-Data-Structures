// Minimum Length Word
// Send Feedback
// Given a string S (that can contain multiple words), you need to find the word which has minimum length.
// Note : If multiple words are of same length, then answer will be first minimum length word in the string.
// Words are seperated by single space only.
// Input Format :
// String S
// Output Format :
// Minimum length word
// Constraints :
// 1 <= Length of String S <= 10^5
// Sample Input 1 :
// this is test string
// Sample Output 1 :
// is
// Sample Input 2 :
// abc de ghihjk a uvw h j
// Sample Output 2 :
// a

/* input - Input String
*  output - Save the result in the output array (passed as argument). You don’t have to 
*  print or return the result
*/
#include<bits/stdc++.h>
#include <vector>
using namespace std;
void minLengthWord(char input[], char output[]){
		
	// Write your code here	
	char x[100000];
	int c = 0, j = 0;
	int mini = INT_MAX;
	int ii = 0;
	int mi = 0;
	for(int i = 0; input[i] != '\0'; i++){
		if(input[i] != ' '){
			c++;
		}
		else{
			// cout << c << endl;
			if(mini > c){
				mini = c;
				mi = ii;
				// cout << mini << endl;
			}
			ii = i + 1;
			c = 0;
		}
	}

	if(mini > c){
		mini = c;
		mi = ii;
	}

	while(mini--){
		output[j++] = input[mi++];
	}
	output[j] = '\0';

}


