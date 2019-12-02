#include <stdio.h>
#include <stdlib.h>
int main()
{
    int tab=NULL;
    int *pt;
    pt = tab;
    pt = malloc((10000*sizeof(int)));

    int i; int j;
   
        for(i=0;i<= 15 ;i++){
            *(pt+i)= i;
        }

        for(j=0;j<=15;j++){
        printf("%d\n",*(pt+j));
        }
}
