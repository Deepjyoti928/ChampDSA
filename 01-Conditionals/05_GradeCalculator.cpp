#include <iostream>
using namespace std;

int main()
{
  int marks;

  cout << "Enter your marks (0 to 100): ";
  cin >> marks;

  if (marks > 100 || marks < 0)
  {
    cout << "Invalid" << endl;
  }
  else if (marks >= 90)
  {
    cout << "Grade: A (Excellent)" << endl;
  }
  else if (marks >= 80)
  {
    cout << "Grade: B (Very Good)" << endl;
  }
  else if (marks >= 70)
  {
    cout << "Grade: C (Good)" << endl;
  }
  else if (marks >= 60)
  {
    cout << "Grade: D (Satisfactory)" << endl;
  }
  else
  {
    cout << "Grade: F (Fail)" << endl;
  }

  return 0;
}
