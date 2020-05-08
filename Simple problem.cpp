// Program reads two-digit number and prints every digit separately, separated by a space.

// Input
// One integer from 10 to 99 including.

// Output
// Two digits separated by a space.

#include<stdio.h>

int main() {
   int a;
   scanf("%d", &a);
   printf("%d %d", a/10, a%10);
   return 0;
}
