#include <iostream>
using namespace std;

// Solution 1
void findIntersect(int* arr, int size, int* arr2, int size1) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size1; j++) {
            if (arr[i] == arr2[j]) {
                cout << arr[i] << " ";
            }
        }
    }
    cout << endl; // Print a newline after printing the intersection
}

int main() {
    // In this file we will find the intersection of two arrays.
    int num1[5] = {1, 2, 3, 4, 7};
    int num2[5] = {2, 3, 4, 7, 23};

    // Pass the arrays and their sizes to the function
    findIntersect(num1, 5, num2, 5);

    // cout << "test" << endl;

    // Solution 2
    int i = 0; int j = 0;

    int n = 5; int m = 5;

    while (i < n && j < m)
    {
        if (num1[i] < num2[j])
        {
            i++;
        }else if (num1[i] == num2[j])
        {
            cout << num1[i] << " ";
            i++; j++;
        }else if(num1[i] > num2[j])
        {
            j++;
        }
    }
    

    return 0;
}
