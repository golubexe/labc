#include <stdio.h>
#include <stdlib.h>

void sporedba(int a, int b, float c, float d) {

  if (a > b && c > d) {
    printf("Najgolemiot cel broj e %d || Najgolemiot realen broj e %.2f", a, c);

  } else if (b > a && d > c) {
    printf("Najgolemiot broj e %d || Najgolemiot realen broj e %.2f", b, d);

  } else {
    printf("Broevite se ednakvi");
  }
}

int main() {
  int broj1, broj2;
  float broj3, broj4;

  printf("Vnesete dva celi broja, pa dva realni broja\n");
  scanf("%d %d %f %f", & broj1, & broj2, & broj3, & broj4);

  printf("Zbirot od dvata celi broja iznesuva %d || Zbirot od dvata realni broja iznesuva %.2f\n", broj1 + broj2, broj3 + broj4);
  printf("Razlikata od dvata broja iznesuva %d || Razlika od dvata realni broja iznesuva %.2f\n", broj1 - broj2, broj3 - broj4);
  printf("Proizvodot od dvata broja iznesuva %d || Proizvod od dvata realni broja iznesuva %.2f\n", broj1 * broj2, broj3 * broj4);

  sporedba(broj1, broj2, broj3, broj4);

  return 0;
}
