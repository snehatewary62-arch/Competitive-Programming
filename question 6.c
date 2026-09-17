#include <stdio.h>

int main() {

    int n;
    int prices[100];
    int temp;

    printf("Enter number of products: ");
    scanf("%d", &n);

    printf("Enter product prices:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {

            if (prices[j] > prices[j + 1]) {

                temp = prices[j];
                prices[j] = prices[j + 1];
                prices[j + 1] = temp;
            }
        }
    }

    printf("Sorted prices:\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", prices[i]);
    }

    return 0;
}
