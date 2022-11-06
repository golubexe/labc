#include <stdio.h>

int main ()
{
    int i,a,counter1=0,counter2=0;
    printf("Vnesi broj\n");
    scanf("%d", &a);
    while(counter2!=2){

        scanf("%d", &i);
        counter1++;

        if(a%i == 0){

            counter2++;
            printf("Counter 2 : %d\n", counter2);

        }
    }
    printf("Counter 1 : %d\n", counter1);
    return 0;
}
