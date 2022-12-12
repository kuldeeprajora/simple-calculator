// simple calculator
#include <stdio.h>
void main()
{
    float value1, value2, result;
    char opr;
    printf("Enter the operation you want to perform +, - ,*,/ \n ");
    scanf("%s", &opr);
    switch (opr)
    {
    case '+':
        printf("entre first value = ");
        scanf("%f", &value1);
        printf("entre second value = ");
        scanf("%f", &value2);
        result = value1 + value2;
        printf("%f %c %f = %f", value1, opr, value2, result);
        break;
    case '-':
        printf("enter first value = ");
        scanf("%f", &value1);
        printf("enter second value = ");
        scanf("%f", &value2);
        result = value1 - value2;
        printf("%f %c %f = %f", value1, opr, value2, result);
        break;
    case '*':
        printf("enter first value = ");
        scanf("%f", &value1);
        printf("enter second value = ");
        scanf("%f", &value2);
        result = value1 * value2;
        printf("%f %c %f = %f", value1, opr, value2, result);
        break;
    case '/':
        printf("enter first value = ");
        scanf("%f", &value2);
        printf("enter second value = ");
        scanf("%f", &value2);
        result = value1 / value2;
        printf("%f %c %f = %f", value1, opr, value2, result);
        break;
    default:
        printf("enter valid operation name");
        break;
    }
}
