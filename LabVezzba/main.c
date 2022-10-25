#include <stdio.h>
#include <stdlib.h>



int main()
{
    int broj1, broj2;
    float broj3, broj4;

    printf("Vnesete dva celi broja, pa dva realni broja\n");
    scanf("%d %d %f %f", &broj1, &broj2, &broj3, &broj4);

    printf("Zbirot od dvata celi broja iznesuva %d || Zbirot od dvata realni broja iznesuva %.2f\n", broj1+broj2, broj3+broj4);
    printf("Razlikata od dvata broja iznesuva %d || Razlika od dvata realni broja iznesuva %.2f\n", broj1-broj2, broj3-broj4);
    printf("Proizvodot od dvata broja iznesuva %d || Proizvod od dvata realni broja iznesuva %.2f\n", broj1*broj2, broj3*broj4);

    if(broj1 > broj2 && broj3 > broj4){
            printf("Najgolemiot cel broj e %d || Najgolemiot realen broj e %.2f", broj1, broj3);
        }
        else if (broj2 > broj1 && broj4 > broj3){
            printf("Najgolemiot broj e %d || Najgolemiot realen broj e %.2f", broj2, broj4);
        }
        else{
            printf("Broevite se ednakvi");
        }

    return 0;
}
