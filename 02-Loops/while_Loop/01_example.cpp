#include <iostream>
using namespace std;

int main()
{
  // run until user enter correct password

  int password;
  int correctPassword = 1234;

  cout << "Enter password: ";
  cin >> password;

  while (password != correctPassword)
  {
    cout << "Wrong! Try again: ";
    cin >> password;
  }

  cout << "Access granted!" << endl;

  return 0;
}