#include <stdio.h>

int countZeros(int r, int c, int m[r][c]) {
    int z = 0;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (m[i][j] == 0) z++;
    return z;
}

int main() {
    int N, M;
    printf("Enter N and M (N,M<20): ");
    scanf("%d%d", &N, &M);
    int a[N][M], b[M][N];

    printf("Matrix A (%dx%d):\n", N, M);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &a[i][j]);

    printf("Matrix B (%dx%d):\n", M, N);
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &b[i][j]);

    int nzA = N * M - countZeros(N, M, a);
    int nzB = M * N - countZeros(M, N, b);

    printf("Non-zero in A: %d\n", nzA);
    printf("Non-zero in B: %d\n", nzB);
    return 0;
}
