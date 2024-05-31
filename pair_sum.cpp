#include <iostream>
using namespace std;

// Solution 1
void pairSum(int* arr, int size, int s) {
    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (arr[i] + arr[j] == s) {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
    // cout << endl;
}

int main() {
    int num1[5] = {1, 2, 3, 4, 5};
    int num2[5] ={2, -3, 3, 3, -2};
    pairSum(num1, 5, 5);
    pairSum(num2, 5, 0);

    // cout << "test" << endl;

    // // Solution 2
    // int i = 0; int j = 0;

    // int n = 5; int m = 5;

    // while (i < n && j < m)
    // {
    //     if (num1[i] < num2[j])
    //     {
    //         i++;
    //     }else if (num1[i] == num2[j])
    //     {
    //         cout << num1[i] << " ";
    //         i++; j++;
    //     }else if(num1[i] > num2[j])
    //     {
    //         j++;
    //     }
    // }
    

    return 0;
}
