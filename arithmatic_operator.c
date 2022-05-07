#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num1, num2, sum, sub, mul, div, rem;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    rem = num1 % num2;

    printf("Summation      = %d\n", sum);
    printf("Subtraction    = %d\n", sub);
    printf("Multiplication = %d\n", mul);
    printf("Division       = %d\n", div);
    printf("Reminder       = %d\n", rem);
    return 0;
}
