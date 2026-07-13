#include <stdio.h>

int main(void) {

    // Task 1 — STUDENT REPORT
    char name[50];
    int id;
    double credit1, credit2, credit3;
    double score1, score2, score3;
    double totalCredits, finalAverage;

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter ID: ");
    scanf("%d", &id);

    printf("Enter 3 Credits: ");
    scanf("%lf %lf %lf", &credit1, &credit2, &credit3);

    printf("Enter 3 Scores: ");
    scanf("%lf %lf %lf", &score1, &score2, &score3);

    totalCredits = credit1 + credit2 + credit3;
    finalAverage = (score1*credit1 + score2*credit2 + score3*credit3) / totalCredits;

    printf("\n===== STUDENT REPORT =====\n");
    printf("%-15s : %s\n",   "Name",          name);
    printf("%-15s : %d\n",   "ID",            id);
    printf("%-15s : %.0lf %.0lf %.0lf\n", "Credits", credit1, credit2, credit3);
    printf("%-15s : %.0lf %.0lf %.0lf\n", "Scores",  score1,  score2,  score3);
    printf("%-15s : %.0lf\n","Total Credits", totalCredits);
    printf("%-15s : %.2lf\n","Final Average", finalAverage);

    if (finalAverage >= 50) {
        printf("%-15s : PASS\n", "Result");
    } else {
        printf("%-15s : FAIL\n", "Result");
    }
    printf("==========================\n");


    // Task 2 — LIBRARY FINE REPORT
    char name2[50];
    int id2, daysLate;
    double rate, totalFine;

    printf("\nEnter Name: ");
    scanf("%s", name2);

    printf("Enter ID: ");
    scanf("%d", &id2);

    printf("Enter Days Late: ");
    scanf("%d", &daysLate);

    printf("\n===== LIBRARY FINE REPORT =====\n");
    printf("%-15s : %s\n", "Name",      name2);
    printf("%-15s : %d\n", "ID",        id2);
    printf("%-15s : %d\n", "Days Late", daysLate);

    if (daysLate < 0) {
        printf("%-15s : Invalid input\n", "Remark");
    } else if (daysLate == 0) {
        printf("%-15s : 0 riel/day\n",  "Rate");
        printf("%-15s : 0 riel\n",      "Total Fine");
        printf("%-15s : No fine\n",     "Remark");
    } else if (daysLate >= 1 && daysLate <= 7) {
        rate      = 500;
        totalFine = rate * daysLate;
        printf("%-15s : %.0lf riel/day\n", "Rate",       rate);
        printf("%-15s : %.0lf riel\n",     "Total Fine", totalFine);
        printf("%-15s : Fine required\n",  "Remark");
    } else if (daysLate >= 8 && daysLate <= 14) {
        rate      = 1000;
        totalFine = rate * daysLate;
        printf("%-15s : %.0lf riel/day\n", "Rate",       rate);
        printf("%-15s : %.0lf riel\n",     "Total Fine", totalFine);
        printf("%-15s : Fine required\n",  "Remark");
    } else {
        rate      = 2000;
        totalFine = rate * daysLate;
        printf("%-15s : %.0lf riel/day\n", "Rate",       rate);
        printf("%-15s : %.0lf riel\n",     "Total Fine", totalFine);
        printf("%-15s : Fine required\n",  "Remark");
    }
    printf("===============================\n");

    return 0;
}