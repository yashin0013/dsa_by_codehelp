#include <iostream>
using namespace std;

int main() {
    // int num[6] = {0, 1, 2, 2, 1, 0};
    int n = 7;
    int num[n] = {5, 1, 2, 3, 2, 4, 2};

    // cout << "test" << endl;

    // // Two Pointer approch
    int i = 0;

        int j =1;

    while (i < n)
    {
       while (num[i] <= num[j] && j < n)
       {
         j++;
       }

       if (num[i] > num[j] && j < n)
        {
             int temp = num[i];
            num[i] = num[j];
            num[j] = temp;
            
    // cout << num[i] << "  ";
        }

       i++;
       j = i+1;


       

    //     if (num[i] > num[j])
    //     {
    //          int temp = num[i];
    //         num[i] = num[j];
    //         num[j] = temp;
    //         i++;
    //         j = i +1;
    // // cout << num[i] << "  ";
    //     }else if (num[i] <= num[j] && j < n)
    //     {
    //         j++;
    //     } else if (j >= n)
    //     {
    //         i++;
    //         j = i +1;
    //     }else
    //     {
    //         i++;
    //         j++;
    //     }

    // cout << i << "  " << j << endl;


    }

     for (size_t i = 0; i < n; i++)
  {
    cout << num[i] << "  ";
  }
    

    return 0;
}
