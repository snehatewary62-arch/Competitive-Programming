#include <stdio.h>

int main() {

    int n;
    int prices[100];
    int temp;

    printf("Enter number of products: ");
    scanf("%d", &n);

    printf("Enter product prices:\n");

    for (int i = 0; i < n; i++) {
        printf("Product %d: ", i + 1);
        scanf("%d", &prices[i]);
    }

    for (int i = 0; i < n - 1; i++) {

        for (int j = i + 1; j < n; j++) {

            if (prices[i] > prices[j]) {

                temp = prices[i];
                prices[i] = prices[j];
                prices[j] = temp;
            }
        }
    }

    printf("\nPrices in ascending order:\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", prices[i]);
    }

    return 0;
}
