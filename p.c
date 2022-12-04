#include<stdio.h>

int main(){
    int a, i, j, k, l;
    printf("Maa chuda");
    scanf("%d", &a);

    for (i = 0; i <= a; i++)
    {
    	printf("\n");
        for (j = 0; j <= i; j++)
        {
        	for( k = 0; k <= j; k++){
        		printf("a");
			}
            printf("*");
        }
        
    }
    	for(l = 0; l <= k; l++){
        			printf(" b");
				}
    return 0;
}
