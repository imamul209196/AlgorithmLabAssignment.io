#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout << "Enter size of array : ";
  cin >> n;
  int a[n];
  float sum = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    sum += a[i];
  }

  cout << "The average of the array is ";
  cout << fixed << setprecision(2) << (float)sum / n << endl;

  return 0;
}
