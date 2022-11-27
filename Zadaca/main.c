#include <stdio.h>
#include <stdlib.h>

int prv(int n){
    while(n >= 10){
        n /= 10;
    }
    return n;
}

int posleden(int n){
    return n % 10;
}

int funk(int a, int b){
    for(int i = a; a < b; i++){
        if(prv(a) < posleden(a)){
        printf("%d\n", a);
        }
        a++;
    }
}

int main()
{
    int a, b;
    printf("Vnesi broj\n");
    scanf("%d%d", &a, &b);
    printf("%d", funk(a,b));
    return 0;
}
