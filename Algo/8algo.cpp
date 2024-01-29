#include <bits/stdc++.h>
using namespace std;
int main()
{
  string a;
  cout << "Input : ";
  cin >> a;
  for (int i = 0; i < a.length(); i++)
  {
    cout << (char)(a[i] + 1);
  }
  cout << endl;

  return 0;
}