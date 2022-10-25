#include <stdio.h>
#include <stdlib.h>

void main()
{
  int a,b,c,d;
  printf("Vnesi gi vrednostite za A, B, C i D");
  scanf("%d%d%d%d", a,b,c,d);
  a += b*c+d;
  printf("\n A = %d", a);


}
