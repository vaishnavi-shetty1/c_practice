#include<stdio.h>

int main(){
    float a,b;
    char op;
    printf("Enter two numbers:\n");
    scanf("%f%f",&a,&b);
    printf("Enter an operator(+,-,*,/):");
    scanf("%c",op);
    switch (op)
    {
    case '+':
        printf("%f + %f = %f\n", a, b, a+b);
        break;
    case '-':
        printf("%f - %f = %f\n", a, b, a-b);
        break;
    case '*':
        printf("%f * %f = %f\n", a, b, a*b);
        break;
    case '/':
        if (b != 0) {
            printf("%f / %f = %f\n", a, b, a / b);
        } else {
            printf("Error: Division by zero!\n");
        }
        break;
    default:
        printf("Invalid operator!\n");
        break;
    }

    return 0;
}
