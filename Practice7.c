#include<stdio.h>

int main(){
	char a = 'A';
	int b = 10;
	float c = 13.33;
	double d = 15.69;
	
	printf("%zu bytes is the size of char", sizeof(a));
	printf("\n%zu bytes is the size of int", sizeof(b));
	printf("\n%zu bytes is the size of float", sizeof(c));
	printf("\n%zu bytes is the size of double", sizeof(d));
	return 0;
}
