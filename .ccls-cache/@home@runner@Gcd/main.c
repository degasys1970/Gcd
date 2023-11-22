#include <stdio.h>
int minimum(int x, int y) {
  if (x < y) {
  return x;
  
  } else {
  return y;
  }
}



int compute_gcd(int a, int b) {
  int gcd = 1;
  int smaller;
  smaller = minimum(a,b);
  for (int i = 1; i <= smaller; i++) {
    if (a % i == 0 && b % i == 0) {
      gcd = i;
    }
  }
  return gcd;
 }
  


int main(void) {
  int a,b;
  printf("number1 : ");
  scanf("%d", &a);
  printf("number2 : ");
  scanf("%d", &b);
  printf("gcd : %d\n", compute_gcd(a, b));
  return 0;
}