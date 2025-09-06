#include<iostream>
#include<climits>
using namespace std;
int getmaxcolsum(int matx[][3], int rows, int cols) {
    int maxcolsum = INT_MIN; // Initialize with the smallest integer value
    for (int j = 0; j < cols; j++) {
        int colsum = 0;
        for (int i = 0; i < rows; i++) {
            colsum += matx[i][j]; // Sum all elements in column j
        }
        maxcolsum = max(maxcolsum, colsum); // Update maxcolsum if current column sum is greater
    }
    return maxcolsum; // Return the maximum column sum
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3;
    int cols = 3;
    cout << getmaxcolsum(matrix, row, cols) << endl; // Output the maximum column sum
    return 0;
}
