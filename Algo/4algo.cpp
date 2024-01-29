#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a[] = {1, 3, 32, 33, 2, 43, 54, 23, 84, 35};
  int max = a[0];
  int min = a[0];

  for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
  {
    if (a[i] > max)
      max = a[i];
    if (a[i] < min)
      min = a[i];
  }
  cout << "Maximum Number is " << max << endl
       << "Minimum Number is " << min << endl;

  return 0;
}