#include <bits/stdc++.h>
using namespace std;
int main()
{
  int m;
  cout << "Enter mark : ";
  cin >> m;
  cout << "Grade   Gread Point     Remark" << endl;
  if (m >= 80 && m <= 100)
  {
    cout << "Grade A+ Grade Point 4.00 Remark Outstanding" << endl;
  }
  if (m >= 75 && m < 80)
  {
    cout << "Grade A Grade Point 3.75 Remark Elcelent" << endl;
  }
  if (m >= 70 && m < 75)
  {
    cout << "Grade A- Grade Point 3.50 Remark Very Good" << endl;
  }
  if (m >= 65 && m < 70)
  {
    cout << "Grade B+ Grade Point 3.25 Remark Good" << endl;
  }
  if (m >= 60 && m < 65)
  {
    cout << "Grade B Grade Point 3.00 Remark Satisfactory" << endl;
  }
  if (m >= 55 && m < 60)
  {
    cout << "Grade B- Grade Point 2.75 Remark Above Average" << endl;
  }
  if (m >= 50 && m < 55)
  {
    cout << "Grade C+ Grade 2.50 Remark Average" << endl;
  }
  if (m >= 45 && m < 50)
  {
    cout << "Grade C Grade 2.25 Remark Below Average" << endl;
  }
  if (m >= 40 && m < 45)
  {
    cout << "Grade D Grade Point 2.00 Remark Pass" << endl;
  }
  if (m >= 0 && m < 40)
  {
    cout << " Grade F Grade Point 0.00 Remark Fail" << endl;
  }
  else
  {
    cout << "Invalid Mark" << endl;
  }
  return 0;
}