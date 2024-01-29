#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    char ch;
    fflush(stdin);
    scanf("%c", &ch);
    if (ch >= '0' && ch <= '9')
    {
      printf("%c is a Digit\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
      printf("%c is Ahphabet :", ch);
      if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
      {
        printf(" It is an Vowel \n");
      }
      else
      {
        printf(" It is a consonent \n");
      }
    }
    else
    {
      printf("%c is a special charecter\n", ch);
    }
  }
}