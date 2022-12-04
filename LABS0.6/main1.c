#include <stdio.h>
#include <stdlib.h>

int prost(int a)
{
   int c;
   for ( c = 2 ; c <= a - 1 ; c++ )
   {
    if ( a%c == 0 ){
     return 0;
     }
   }
   return 1;
}

int main()
{
    int n,first,second;
    printf("Vnesi ja dolzinata na nizata \n");
    scanf("%d", &n);
    int niza[n];
    int nova[n];
    for(int i = 0; i < n; i++){
        printf("Vnesi clenovi na nizata\n");
        scanf("%d", &niza[i]);
    }
    for(int i = 0; i < n; i++){
        first = niza[i];
        second = niza[i+1];
        if(prost(first)!=0 && prost(second)!=0)
        {
            nova[i]=second;
            nova[i+1]=first;
            i++;
        }else
        nova[i] = first;
    }
    for(int i = 0;i < n; i++){
        printf("%d ", nova[i]);
    }

    return 0;
}
