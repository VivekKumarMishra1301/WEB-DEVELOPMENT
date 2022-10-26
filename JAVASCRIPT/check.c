#include <stdio.h>

void push(char);
void pop();
int isAlphanumeric(char);
int isOperator(char);

int i, stack[20];
int top = -1;
int main()
{
    int i;
    char Ex[] = "((A+B)*C+(D*(F-J)))";
    // printf("1\n");
    for (i = 0; Ex[i] != '\0'; i++)
    {
        if (Ex[i] == '(')
        {
            push(Ex[i]);
            // printf("2\n");
        }
        else if (isAlphanumeric(Ex[i]))
        {
            printf("%c", Ex[i]);
            // printf("3\n");
        }
        else if (isOperator(Ex[i]))
        {
            push(Ex[i]);
            // printf("4\n");
        }
        else if (Ex[i] == ')')
        {
            // printf("5\n");
            while (stack[top] != '(')
            {
                pop();
            }
            pop();
        }
    }
}

void push(char n)
{
    // printf("6push\n");
    top++;
    stack[top] = n;
}

void pop()
{
    // printf("7pop\n");
    if (stack[top] != '(')

        printf("%c", stack[top]);
    top--;
}

int isAlphanumeric(char m)
{
    // printf("8alpha\n");
    if (m >= 65 && m <= 90 || m >= 97 && m <= 122 || m >= 48 && m <= 57)
        return 1;
    return 0;
}

int isOperator(char ch)
{
    // printf("9operator\n");
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        return 1;
    return 0;
}