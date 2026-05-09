#include <stdio.h>

int main() {
    int days, i;
    float sales, total_sales = 0.0, average_sales, highest_sales = 0.0;
    printf("Enter number of days: ");
    scanf("%d", &days);
    for (i = 1; i <= days; i++) {
        printf("Day %d sales: ", i);
        scanf("%f", &sales);
        total_sales += sales;
        if (i == 1 || sales > highest_sales) {
            highest_sales = sales;
        }
    }
    if (days > 0) {
        average_sales = total_sales / days;
    } else {
        average_sales = 0;
    }   
    printf("\nTotal sales: %.0f\n", total_sales);
    printf("Average sales: %.2f\n", average_sales);
    printf("Highest sales: %.0f\n", highest_sales);
    return 0;
}