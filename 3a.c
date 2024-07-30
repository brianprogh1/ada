#include <stdio.h>

void flyd(int w[10][10], int n) {
    int i, j, k;
    for (k = 1; k <= n; k++)
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++)
                w[i][j] = (w[i][j] < w[i][k] + w[k][j]) ? w[i][j] : (w[i][k] + w[k][j]);
}

int main() {
    int a[10][10];
    int n, i, j;

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("Enter the weighted matrix:\n");
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);

    flyd(a, n);

    printf("The shortest path matrix is:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

