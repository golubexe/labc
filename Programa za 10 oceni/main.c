#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int counter;
    int ocena;
    int total;
    int average;

    total = 0;
    counter = 1;

    while(counter <= 10){
        printf("%s", "Vnesi ocena : ");
        scanf("%d", &ocena);
        total = total + ocena;
        counter++;
    }

    average = total / 10;


    printf("Sredna vrednost e %d", average);



}
