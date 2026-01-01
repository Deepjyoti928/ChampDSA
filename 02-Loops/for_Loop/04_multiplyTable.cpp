#include <iostream>
using namespace std;

int main()
{
  int num;

  cout << "Enter number to get the table of: ";
  cin >> num;

  cout << "\n\nWelcome to the table of " << num << "\n\n";

  for (int i = 1; i <= 10; i++)
  {
    cout << num << " X " << i << " = " << num * i << endl;
  }

  return 0;
}