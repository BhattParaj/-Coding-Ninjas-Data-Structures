// Print 2D Array
// Send Feedback
// Given a 2D integer array with n rows and m columns. Print the 0th row from input n times, 1st row n-1 times…..(n-1)th row will be printed 1 time.
// Input format :
// Line 1 : No of rows (n) and no of columns (m) (separated by single space)
// Line 2 : Row 1 elements (separated by space)
// Line 3 : Row 2 elements (separated by space)
// Line 4 : and so on
// Sample Input 1:
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
// Sample Output 1 :
// 1 2 3
// 1 2 3
// 1 2 3
// 4 5 6
// 4 5 6
// 7 8 9

using namespace std;

void print2DArray(int **input, int row, int col)
{
    int t = row;
    for(int i = 0; i < row ; i++) {
        int p = 0;
	    while(p != t)
	    {
            for(int j = 0; j < col; j++) {
	        cout << input[i][j] << " ";
	    }
        p++;
            cout << endl;
        }
	    t--;
        
    }
}