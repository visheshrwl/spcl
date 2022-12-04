#include<stdio.h>

int main(){
	int a,b,c,d;
	printf("Enter the Dividend:\n");
	scanf("%d", &a);
	printf("Enter the Divisor:\n");
	scanf("%d", &b);
	c = a / b;
	d = a % b;
	printf("Quotient is %d", c); 
	printf("Remainder is %d", d);
	return 0;
}
