#include<stdio.h>

int main(){
	int choice = 0;
	int a,b,n,c,i;
	
	while(1){
		printf("Press 1 to check whether the number is Prime or not\n");
		printf("Press 2 to check whether the number is Odd or Even\n");
		printf("Press 3 to Exit the Code\n");
		printf("\nEnter the operation you wish to perform:");
		scanf("%d", &choice);
		
		if(choice == 2){
			printf("Enter the Number:\n");
			scanf("%d", &a);
			if(a % 2 == 0)
        		printf("%d is even.", a);
    		else 
        		printf("%d is odd.", a);
		}
		else if(choice == 1){
			printf("Enter the Number:\n");
			scanf("%d", &b);
			for(i=1; i<=b; i++){
				if(b%i == 0){
					c++;
				}
			}
			if(c==2){
				printf("Entered number is Prime Number\n");
			}
			else{
				printf("Entered number is not Prime Number\n");
			}
		}
	}
	return 0;
}


