#include <stdio.h> int main() {
 
int m1, m2, m3, m4, m5, total; float percentage;
printf("Enter marks of 5 subjects: ");
scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5); total = m1 + m2 + m3 + m4 + m5;
percentage = total / 5. printf("Total = %d\n", total);
printf("Percentage = %.2f\n", percentage); if (percentage >= 90)
printf("Grade: A\n"); else if (percentage >= 75)
printf("Grade: B\n"); else if (percentage >= 60)
printf("Grade: C\n"); else if (percentage >= 40)
printf("Grade: D\n"); else
printf("Grade: Fail\n"); return 0;
}
