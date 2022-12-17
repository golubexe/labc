#include <stdio.h>

int funk(){ // Funkcija za ne dozvolen vnes pogolem od 100
    int n;
    for(;;){
        scanf("%d", &n);
        if(n<=100){
            return n;
        }
        printf("Vnesi broj sto e pomal od 100\n");
    }
}

int largesmall(int niza[], int n, int *min, int *max){

    *min = *max = niza[0];
    
    for (int i = 1; i < n; i++) {
    
    if (niza[i] < *min) {
      *min = niza[i];
    }
    if (niza[i] > *max) {
      *max = niza[i];
    }
  
  }
}

int main(){
    int n,max,min;
    printf("Vnesi kolku sakas da bide dolga nizata\n");
    n=funk();
    int niza[n];

    for(int i = 0; i < n; i++){
        printf("Vnesuvi elemnt vo nizata\n");
        scanf("%d", &niza[i]);
        }

    largesmall(niza, n, &min, &max);
    printf("Najgolemiot broj vo nizata e %d, a najmal e %d\n", max, min);

}