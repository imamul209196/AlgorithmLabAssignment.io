#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout << "How many Number you want to insert? " << endl;
  cin >> n;
  int x[n];
  cout << "Enter 5 array Element " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> x[i];
  }
  for (int i = 0; i < 2; i++)
  {
    int a;
    cout << "Enter data you want to search :";
    cin >> a;
    for (int j = 0; j < n; j++)
    {
      if (x[j] == a)
      {
        cout << a << " is found at index " << j << endl;
        break;
      }
      if (j == n - 1)
        cout << a << " is not found in the array" << endl;
    }
  }

  return 0;
}