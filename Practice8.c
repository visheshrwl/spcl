#include<stdio.h>

int main(){
	
	int number, radius, num;
	float result;
	printf("Press 1 to check number is Even or Odd:\n");
	printf("Press 2 For Factorial of given numbers:\n");
	printf("Press 3 For count number of digits in an integar:\n");
	printf("Enter your choice:\n");
	scanf("%d", &number);
	
	do{
			switch (number) {
				case 1: 
					printf("Enter the number:\n");
					scanf("%d", &num);
						if(num % 2 == 0 )
							{
							printf("Number is Prime");
							}
						else if(num % 2 != 0){
							printf("Number is not Prime");
				`		}
				else{
					break;
				}
			break;
		
		case 2: 
			printf("Enter side of square:\n");
			scanf("%d", &num);
			result = num * num;
			printf("Area of square = %f", result);
			break;
		
		case 3: 
			printf("Enter radius:\n");
			scanf("%d", &num);
			result = 4 * 3.14 * num * num;
			printf("Area of sphere = %f", result);
			break;
		
	}
}
while(number<=3 && number >0);
	

	return 0;
}
