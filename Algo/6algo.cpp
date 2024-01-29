#include <bits/stdc++.h>
using namespace std;
int main()
{
  cout << "Enter how many element you inset in array : ";
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (a[i] < 0)
      cout << a[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < n; i++)
  {
    if (a[i] > 0)
      cout << a[i] << " ";
  }
  cout << endl;

  return 0;
}