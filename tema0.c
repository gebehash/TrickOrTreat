#include <stdio.h>
#define sapte 7
#define unsprezece 11
int main() {
    int n = 0;

    printf("Introduceti valoarea numarului natural N:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % sapte == 0 && i % unsprezece == 0) {
            if (i != n) {
                printf("TrickOrTreat ");
            } else {
                printf("TrickOrTreat");
            }
            continue;
        }

        if (i % sapte == 0) {
            if (i != n) {
                printf("Trick ");
            } else {
                printf("Trick");
            }
            continue;
        }

        if (i % unsprezece == 0) {
            if (i != n) {
                printf("Treat ");
            } else {
                printf("Treat");
            }
            continue;
        }
        if (i != n) {
            printf("%d ", i);
        } else {
            printf("%d", i);
        }
    }

    return 0;
}
