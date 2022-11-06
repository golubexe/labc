#include <stdio.h>

float percent(int a, int b)
{
    return (((b - a) * 100) / a);
}


int main ()
{
  int i, n, num, count;
  count = 0;
  printf ("Vnesete kolku broevi sakate da vnesete\n");
  scanf ("%d", &n);
  int broevi[n];
  for (i = 0; i < n; i++)
    {
      printf ("Vnesete broj\n");
      scanf ("%d", &broevi[i]);
    }
  for (i = 0; i < n; i++)
    {
        if(i%2 == 0){
            printf ("%d ", broevi[i]);
            count++;
        }

    }

   printf("%.2f", percent(count,n));

  return 0;
}
