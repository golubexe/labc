#include <stdio.h>
#include <stdlib.h>

int funk(){
    int n;
    for(;;){
        scanf("%d", &n);
        if(n<=100){
            return n;
        }
        printf("Vnesi vrednost pomala od 100\n");
    }
}

int main(){
    int n,m,count=0,sum=0,sredna,c=0;
    printf("Vnesi go brojot na redici\n");
    n=funk();
    printf("Vnesi go brojot na koloni\n");
    m=funk();
    int niza[n][m];

    printf("Vnesi vrednosti vo nizata\n");
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &niza[i][j]);
            sum = sum+niza[i][j];
            count++;
        }
    }
    sredna = sum/count;
    printf("Srednata vrednost e %d\n", sredna);
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n; j++){
            if(niza[i][j]>sredna){
                printf("Brojot sto e pogolem od srednata vrednost %d\n", niza[i][j]);
            c++;
            }
        }
    }
    printf("%d elementi od nizata go ispolnuvaat uslovot\n", c);

}
