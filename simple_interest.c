#include <stdio.h>

int main(void) {
    double principal, rate, time, simple_interest, total_amount;

    printf("Enter principal amount: ");
    if (scanf("%lf", &principal) != 1 || principal < 0) {
        printf("Invalid principal amount.\n");
        return 1;
    }

    printf("Enter annual interest rate (%%): ");
    if (scanf("%lf", &rate) != 1 || rate < 0) {
        printf("Invalid interest rate.\n");
        return 1;
    }

    printf("Enter time (years): ");
    if (scanf("%lf", &time) != 1 || time < 0) {
        printf("Invalid time.\n");
        return 1;
    }

    simple_interest = (principal * rate * time) / 100.0;
    total_amount = principal + simple_interest;

    printf("\nSimple Interest = %.2f\n", simple_interest);
    printf("Total Amount = %.2f\n", total_amount);

    return 0;
}
