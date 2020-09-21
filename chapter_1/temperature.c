#include <stdio.h>

int main() 
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0; /* lower limit of table */
  upper = 300; /* upper limite of table */
  step = 20; /* step increment */

  fahr = lower;
  while (fahr <= upper) {
    celsius = 5.0 / 9.0 * (fahr - 32);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
  return 0;
}
