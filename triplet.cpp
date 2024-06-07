#include <iostream>
#include <vector>
using namespace std;

void triplet(int *arr, int size, int s)
{

    for (int i = 0; i < size; i++)
    {
        cout << "i "<< arr[i] << endl;
        for (int j = i + 1; j < size; j++)
        {
            cout << "j " << arr[j] << endl;
            for (int k = j + 1; k < size; k++)
            {
                cout << "k " << arr[k] << endl;
                if (arr[i] + arr[j] + arr[k] == s)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }
    // cout << endl;
};

int main()
{

    int num1[5] = {10, 5, 5, 5, 2};
    triplet(num1, 5, 12);
    
    return 0;
}
