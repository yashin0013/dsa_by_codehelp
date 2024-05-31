#include <iostream>
using namespace std;

int main() {

  int numbers[5] = {1,2,3,4,5};


  cout << "The numbers are: ";

  for (int n = 0; n < 5; n += 2) {
    if (n+1 < 5)
    {
    int temp = numbers[n];
    numbers[n] = numbers[n+1];
    numbers[n+1] = temp;
    }
    

  }

  for (size_t i = 0; i < 5; i++)
  {
    cout << numbers[i] << "  ";
  }
  

  return 0;
}