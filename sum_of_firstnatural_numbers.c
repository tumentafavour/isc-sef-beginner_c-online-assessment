#include <stdio.h> 
int main() {
int n, sum = 0;
//ask the user to enter a possitive integer
printf("enter a possitive integer:");
scanf("%d", &n);
// formula for sum = n*(n+1)/2
sum = n * (n + 1) / 2;
printf("sum of first %d natural numbers: %d\n", n, sum);
return 0;
}
