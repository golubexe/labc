#include <stdio.h>

int funk(){
    int n;
    for(;;){
        scanf("%d", &n);
        if(n<=100){
            return n;
        }
        printf("Vnesi broj pomal od 100\n");
    }
}

int bomba(int arr[], int n){
    
    int *ptr;
    ptr = &arr[n - 1];

    for(int i = 0; i < n; i++){
        printf("%d ", *ptr);
        *ptr--;
    }

}

int main(){
    int n;
    printf("Vnesi ja dolzinata\n");
    n=funk();
    int niza[n];
    
    for(int i = 0; i < n; i++){
        printf("Vnesi element\n");
        scanf("%d", &niza[i]);
    }

    bomba(niza, n);


}
