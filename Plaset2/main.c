#include <stdio.h>
#include <stdlib.h>

int funkcija (int n)
{
    if (n != 0){
        if (((n / 10) % 10) < n % 10) {
            return n < 9 ?  1 : funkcija (n /= 10);
    	}
    }
    return 0;
}
int main ()
{
  int n;
  printf ("Vnesi broj : ");
  scanf ("%d", &n);
  printf ("%d", funkcija (n));
  return 0;
}

