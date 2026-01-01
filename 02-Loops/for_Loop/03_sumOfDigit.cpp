#include<iostream>
using namespace std;

int main()
{
  int sum = 0;
  int n;
  cout << "Enter n value: ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    sum += i;
  }

  cout <<"Sum of digits = "<< sum;
  return 0;
}