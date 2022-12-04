#include<stdio.h>
int main(int argc, char const *argv[])
{
    int sub, kub, tub;
    printf("If you're passed in maths, press 1\nIf you're passed in science, press 2\nIf you're passed in both maths and science , press 3:\n");
    scanf("%d", &sub);
    printf("You've pressed %d\n", sub);
    if (sub == 1)
    {
        printf("Yay! You've won $15");
    }
    else if (sub == 2)
    {
        printf("Yay! You've won $15");
    }
    else if (sub == 3)
    {
        printf("Yay! You've won $45");
    }
    else
    {
        printf("You've selected wrong number");
    }
    return 0;
}
