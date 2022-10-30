#include <stdio.h>
#include <stdlib.h>

int main()
{
    int str1,str2,str3;
    printf("Vnesi gi trite strani na triagolnikot\n");
    scanf("%d %d %d", &str1, &str2, &str3);
    if((str1+str2>str3) && (str2+str3>str1) && (str1+str3>str2)){
        printf("Triagolnikot e validen");
    } else
    printf("Triagolnikot ne e validen");
    return 0;
}

