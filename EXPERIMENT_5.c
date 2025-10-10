#include <stdio.h> int main() {
int a[2][2], b[2][2], c[2][2];
 
int i, j;
// Input for Matrix A
printf("Enter elements of 2x2 Matrix A:\n"); for(i = 0; i < 2; i++) {
for(j = 0; j < 2; j++) { scanf("%d", &a[i][j]);
}
}
// Input for Matrix B
printf("Enter elements of 2x2 Matrix B:\n"); for(i = 0; i < 2; i++) {
for(j = 0; j < 2; j++) { scanf("%d", &b[i][j]);
}
}
// Addition
printf("\nAddition of A and B:\n"); for(i = 0; i < 2; i++) {
for(j = 0; j < 2; j++) { c[i][j] = a[i][j] + b[i][j];
printf("%d ", c[i][j]);
}
printf("\n");
}
 
// Subtraction
printf("\nSubtraction of A and B:\n"); for(i = 0; i < 2; i++) {
for(j = 0; j < 2; j++) { c[i][j] = a[i][j] - b[i][j];
printf("%d ", c[i][j]);
}
printf("\n");
}
// Multiplication
printf("\nMultiplication of A and B:\n"); for(i = 0; i < 2; i++) {
for(j = 0; j < 2; j++) {
c[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j]; printf("%d ", c[i][j]);
}
printf("\n");
}


// Transpose of A printf("\nTranspose of Matrix A:\n"); for(i = 0; i < 2; i++) {
for(j = 0; j < 2; j++) {
printf("%d ", a[j][i]);
 
}
printf("\n");
}


return 0;
}
