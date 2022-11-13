#include <stdio.h>
#include <stdlib.h>

int funk(int n){

    if(n != 0){
        while(((n / 10) % 10) % (n % 10) == 0){
            return funk(n/10);
        }
        return 0;
    }
    return 1;
}

int main(){

    int n;
    printf("Vnesi broj\n");
    scanf("%d", &n);

    printf("%d", funk(n));

    return 1;

}
