#include<stdio.h>

// int main(){
// 	printf("Hello World");
// 	return 0;
// }

// int main(){
// 	int a=10;
// 	printf("%d", a);
// 	return 0;
// }

// int main(){
// 	float a = 0.998;
// 	printf("%f", a);
// 	return 0;
// }

// int main(){
// 	char mychar = 'v';
// 	printf("%c", mychar);
// 	return 0;
// }

// int main(){
// 	int a,b,c,sum,sub,mul;
// 	printf("Enter the numbers on which you want to apply these functions:\n");
// 	scanf("%d %d %d", &a,&b,&c);
	
// 	sum = a+b+c;
// 	sub = a-b-c;
// 	mul = a*b*c;
	
// 	printf("%d is the sum of all numbers\n", sum);
// 	printf("%d is the sub of all numbers from 1st one\n", sub);
// 	printf("%d is the multiplication of all the numbers", mul);
// 	return 0;
// }

int main(){
	float basic , da, ta, gross_salary, gpf, si, rghs, it , net_salary;
	
	printf("Enter the Basic Salary:\n");
	scanf("%f", &basic);
	
	printf("Enter the ta offered(in Percentage):\n");
	scanf("%f", &ta);
	
	printf("Enter the da offered(in Percentage):\n");
	scanf("%f", &da);
	
	gross_salary = basic+((ta*basic)/100)+((da*basic)/100);
	
	printf("Your Gross Salary is %f\n", gross_salary);
	printf("Your yearly Gross Salary is %f\n", gross_salary*12);
	printf("Enter the gpf amount deducted:\n");
	scanf("%f", &gpf);
	
	printf("Enter the State Insurance amount deducted:\n");
	scanf("%f", &si);
	
	printf("Enter the RGHS amount deducted:\n");
	scanf("%f", &rghs);
	
	printf("Enter the Income Tax amount deducted:\n");
	scanf("%f", &it);
	
	net_salary = gross_salary - gpf - si - rghs - it;
	printf("%f is your net salary\n", net_salary);
	printf("%f is your Yearly Net Salary (After your all Deductions)\n", net_salary*12);
	
	return 0;
}
















