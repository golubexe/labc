#include <stdio.h>
#include <stdlib.h>

int funk(){
    int n;
    for(;;)
    {
        scanf("%d", &n);
        if(n<100){
            return n;
            break;
        }
        printf("Tvojata vrednost ne e validna\n");
    }
}

int maxnum(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int n;
    printf("Vnesi ja dolzinata na nizata\n");
    n=funk();
    int niza[n];
    for(int i = 0; i < n; i++){
        printf("Vnesi clenovi\n");
        scanf("%d", &niza[i]);
    }

    printf("Najgolemiot broj e %d\n",maxnum(niza,n));

    printf("Novata niza e ");

    for(int i = 0; i < n; i++){
        printf("%d ", abs(niza[i] - maxnum(niza,n)));
    }
    return 0;
}
