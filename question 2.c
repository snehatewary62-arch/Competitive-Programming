#include <stdio.h>

int main() {
    int n;
    int patients[100];
    int maxPatients, minPatients;
    int maxHour;
    int sum = 0;
    int aboveAverage = 0;
    float average;

    printf("Enter number of hours: ");
    scanf("%d", &n);

    printf("Enter number of patients for each hour:\n");

    for (int i = 0; i < n; i++) {
        printf("Hour %d: ", i + 1);
        scanf("%d", &patients[i]);
    }

    maxPatients = patients[0];
    minPatients = patients[0];
    maxHour = 1;

    for (int i = 0; i < n; i++) {

        sum = sum + patients[i];

        if (patients[i] > maxPatients) {
            maxPatients = patients[i];
            maxHour = i + 1;
        }

        if (patients[i] < minPatients) {
            minPatients = patients[i];
        }
    }

    average = (float)sum / n;

    for (int i = 0; i < n; i++) {
        if (patients[i] > average) {
            aboveAverage++;
        }
    }

    printf("\n----- Hospital Emergency Monitoring -----\n");

    printf("Maximum number of patients = %d\n", maxPatients);
    printf("Hour when maximum occurred = %d\n", maxHour);
    printf("Minimum number of patients = %d\n", minPatients);
    printf("Peak hour = %d\n", maxHour);
    printf("Average number of patients = %.2f\n", average);
    printf("Number of hours above average = %d\n", aboveAverage);

    return 0;
}
