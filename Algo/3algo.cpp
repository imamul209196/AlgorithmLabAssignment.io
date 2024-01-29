#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a;
  scanf("%d", &a);
  if (a == 1)
  {
    printf("%d is not a prime Number\n", a);
    return 0;
  }
  if (a == 2)
  {
    printf("%d is a prime Number\n", a);
    return 0;
  }
  for (int i = 2; i < a - 1; i++)
  {
    if (a % i == 0)
    {
      printf("%d is not prime Number\n", a);
      return 0;
    }
  }
  printf("%d is a prime Number\n", a);

  return 0;
}