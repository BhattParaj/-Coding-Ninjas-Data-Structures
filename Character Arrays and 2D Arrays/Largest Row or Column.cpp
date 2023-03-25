// Largest Row or Column
// Send Feedback
// For a given two-dimensional integer array/list of size (N x M), you need to find out which row or column has the largest sum(sum of all the elements in a row/column) amongst all the rows and columns.
// Note :
// If there are more than one rows/columns with maximum sum, consider the row/column that comes first. And if ith row and jth column has the same largest sum, consider the ith row as answer.
// Input Format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains two integer values, 'N' and 'M', separated by a single space. They represent the 'rows' and 'columns' respectively, for the two-dimensional array/list.

// Second line onwards, the next 'N' lines or rows represent the ith row values.

// Each of the ith row constitutes 'M' column values separated by a single space.
// Output Format :
// For each test case, If row sum is maximum, then print: "row" <row_index> <row_sum>
// OR
// If column sum is maximum, then print: "column" <col_index> <col_sum>
// It will be printed in a single line separated by a single space between each piece of information.

// Output for every test case will be printed in a seperate line.
//  Consider :
// If there doesn't exist a sum at all then print "row 0 -2147483648", where -2147483648 or -2^31 is the smallest value for the range of Integer.
// Constraints :
// 1 <= t <= 10^2
// 1 <= N <= 10^3
// 1 <= M <= 10^3
// Time Limit: 1sec

/*
You can use minimum value of integer as -2147483647 and 
maximum value of integer as 2147483647
*/
void findLargest(int **arr, int m, int n)
{
    //Write your code here
    
	int a[n];

	for(int i = 0; i < n; i++){
		a[i] = 0;
	}

    int maxi1 = 0;
    int index1 =0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			a[i] += arr[j][i];
		}
        if(maxi1 < a[i]){
            maxi1 = a[i];
            index1 = i;
        }
	}

    int a1[m];

	for(int i = 0; i < m; i++){
		a1[i] = 0;
	}

    int maxi2 = 0;
    int index2 =0;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			a1[i] += arr[i][j];
		}
        if(maxi2 < a1[i]){
            maxi2 = a1[i];
            index2 = i;
        }
	}

    if(maxi1 == maxi2 && maxi1 == 0){
        maxi2 = -2147483648;
        maxi1 = -2147483648;
        // cout 
    }

    if(maxi1 > maxi2){
        cout << "column "<< index1 << " " << maxi1 << endl;
    }
    else{
        cout << "row "<< index2 << " " << maxi2 << endl;
    }


}