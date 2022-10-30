#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Vnesi dva celi broja\n");
    scanf("%d%d", &a, &b);
    if(a>b){
        b=a-b;
        printf("Vrednosta na A : %d, Vrednosta na B : %d",a*b, b);
    }
    else
    printf("Vrednosta na A : %d, Vrednosta na B : %d, Kolicnikot od dvata broja e : %.2f",a*b,b,(float)a/b);
    return 0;
}
