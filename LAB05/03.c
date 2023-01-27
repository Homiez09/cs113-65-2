#include <stdio.h>

int main (void) {
    double initial_value, n;
    char operation;

    printf("Initial Value: ");
    scanf("%lf", &initial_value);
    
    while (1) {
        printf("\nOperator: ");
        scanf(" %c", &operation);
        if (operation != '=' && operation != '+' && operation != '-' && operation != '*' && operation != '/') {
            printf("\nFinish Calculation. Final Value is %.4lf", initial_value);
            return 0;
        }
        printf("Input Value: ");
        scanf(" %lf", &n);

        switch (operation)
        {
        case '+':
            initial_value += n;
            break;
        case '-':
            initial_value -= n;
            break;
        case '*':
            initial_value *= n;
            break;
        case '/':
            initial_value /= n;
            break;
        default:
            break;
        }
        printf("Present Value is %.4lf\n", initial_value);
    }
}