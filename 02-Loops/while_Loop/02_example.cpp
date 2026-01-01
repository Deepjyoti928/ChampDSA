#include <iostream>
using namespace std;

int main()
{
  // sum until user enters 0

  int num;
  int sum = 0;

  cout << "Enter number (0 to stop): " << endl;
  
  while(true) {
    cin >> num;

    if (num == 0)
    {
      break;
    }
    sum += num;
  }

  cout << "Total sum: " << sum << endl;

  return 0;
}