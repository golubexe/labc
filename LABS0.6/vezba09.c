#include <stdio.h>
#include <ctype.h>

int funk ()
{
  int n;
  for(;;)
    {
      scanf ("%d", &n);
      if (n <= 100)
    {
      return n;
    }
      printf ("Vnesi pomala vrednost od 100\n");
    }
}

void uporedi(char* str1, char* str2) {
  // Paralelno gi sporeduvame i dvete nizi
  // Se dodeka ne stigneme do nulti terminantot
  while (*str1 != '\0' && *str2 != '\0') {
    // Proverka dali karakterite se bukvi ili brojki
    if ((isalpha(*str1) && isalpha(*str2)) || (!isalpha(*str1) && !isalpha(*str2))) {
      if (*str1 < *str2) {
        printf("%c", *str1);
      } else {
        printf("%c", *str2);
      }
    } else {
    // Ako eden od vnesenite karakteri e bukva a drugiot ne e, ispecati zvezda
      printf(" * ");
    }
    // Vrtenje kroz site karakteri na nizata
    str1++;
    str2++;
  }
}

int main ()
{
  int n;
  printf ("Vnesi ja dolzinata na nizite\n");
  n = funk ();

  char prva[n], vtora[n];

  printf ("Vnesi vo prvata niza\n");
  for (int i = 0; i < n; i++)
    {
      scanf ("%s", prva);
    }
    
  printf ("Vnesiuvaj vo vtorata niza\n");
  for (int i = 0; i < n; i++)
    {
      scanf ("%s", vtora);
    }
   
  uporedi(prva,vtora);
  return 0;
}