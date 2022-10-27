#include <stdio.h>

int main() {
    int n = 0;

    printf("Introduceti valoarea numarului natural N:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 7 == 0 && i % 11 == 0) {
            printf("TrickOrTreat ");
            continue;
        }

        if (i % 7 == 0) {
            printf("Trick ");
            continue;
        }

        if (i % 11 == 0) {
            printf("Treat ");
            continue;
        }

        printf("%d ", i);
    }

    return 0;
}
