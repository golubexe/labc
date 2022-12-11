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
    int n,m,c=0;
    printf("Vnesi go brojot na redici\n");
    n=funk();
    printf("Vnesi go brojot na koloni\n");
    m=funk();
    int niza[n][m];
    int nova[n][m];

    //Vnesuvanje elemnti na prvata niza
    printf("Vnesete elemtni vo prvata niza\n");
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &niza[i][j]);
        }
    }

    //Vnesuvanje elemnti na vtorata niza
    printf("Vnesete elementi vo vtorata niza\n");
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &nova[i][j]);
        }
    }
    //Proverka dali se isti elemntite
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            if(niza[i][j]==nova[i][j]){
                printf("Redica %d kolona %d\n",i,j);
            c++;
            }
        }
    }
    printf("Ima %d elementi so ista pozicija i vrednost", c);
    return 0;
}

