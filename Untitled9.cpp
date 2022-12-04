#include<stdio.h>

int main(){
	int choice = 0;
	int a,b;
	
	printf("Press 1 to check whether the number is Prime or not");
	printf("Press 2 to check whether the number is Odd or Even");
	printf("Press 3 to Exit the Code");
	
	while(1){
		printf("\nEnter the operation you wish to perform:");
		scanf("%d", &choice);
		
		if(choice == 1){
			printf("Enter the Number:");
			scanf("%d", &a);
			if(a % 2 == 0)
        		printf("%d is even.", num);
    		else
        		printf("%d is odd.", num);
		}
		
	}
}
