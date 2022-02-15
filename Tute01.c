/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main()
{
  int a, b;
  float total, avg;

  printf("Marks of subject 1 : ");
  scanf("%d", &a);

  printf("Marks of subject 2 : ");
  scanf("%d", &b);

  total = a + b;

  avg = total/2;

  printf("Total = %.2f\n", total);
  printf( "The average is %2.f\n", avg);
  
  return 0;
}
