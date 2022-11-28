#include <stdio.h>
#include <stdlib.h>

int proverka(int a){
    int cifra;
    if(a/10==0){
        return a;
    }else{
        cifra=a%10;
        if(cifra%2!=0){
            return cifra+proverka(a/10);
        } else return proverka(a/10);
    }

}

int funk(int a, int b){
    for(a; a <= b; a++){
        if(proverka(a) != 0 && proverka(a)%5 == 0)
        printf("%d\n", a);
    }
}

int main()
{
    int a,b;
    printf("Vnesi pocetok i kraj\n");
    scanf("%d%d", &a, &b);
    printf("%d", funk(a,b));
    return 0;
}
