#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter number to get the reverse: ";
  cin >> n;

  for (int i = n; i > 0; i--)
  {
    cout << i << " ";
  }
  
}