#include <stdio.h>

// Function to add two numbers
double add(double num1, double num2) {
    return num1 + num2;
}

// Function to subtract two numbers
double subtract(double num1, double num2) {
    return num1 - num2;
}

// Function to multiply two numbers
double multiply(double num1, double num2) {
    return num1 * num2;
}

// Function to divide two numbers
double divide(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
}

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch(operator) {
        case '+':
            result = add(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = subtract(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = multiply(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            result = divide(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
