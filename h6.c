#include<stdio.h>

int areaofrect(int l, int b)
{
    int area;
    area = l * b;
    return area;
}

int main(){
    int l,b;
    printf("Enter the Length and Width of Rectangle:\n");
    scanf("%d %d", &l, &b);
    int area = areaofrect(l,b);
    printf("Area of Rectangle is %d\n", area);
    return 0;
}
