#include<stdio.h>
int main(){
	int n,i,c=0;
	printf("enter the number to check \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			c++;
		}
	}
		if(c==2){
			printf("entered number is prime number\n");
			
		}
		else{
			printf("entered number is not prime number \n");
			
		}
	
	return 0;
}
