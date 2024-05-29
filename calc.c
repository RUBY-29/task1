

#include <stdio.h>

int main() {
    int num1,num2;
    char op;
    printf("enter num1:");
    scanf("%d", &num1);
    printf("enter num2:");
    scanf("%d", &num2);
    printf("enter op:");
    scanf(" \n %c", &op);
    if(op == '+')
    {
        printf("res:%d", num1+num2);
    }
    else if(op =='-')
    {
       printf("res:%d", num1-num2);
    }
    else if(op == '*')
    {
         printf("res:%d", num1*num2);
    }
    else if(op == '/')
    {
         printf("res:%d", num1/num2);
    }
    else
    {
         printf("res:%d", num1%num2);
    }
    

    return 0;
}
