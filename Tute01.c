/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
int main() {
  int mark1, mark2;
  float total, average;

  printf("Enter 1st number: ");
  scanf("%d", &mark1);
  printf("Enter 2nd number: ");
  scanf("%d", &mark2);
  
  total = mark1+ mark2;
  average = total / 2;

  printf("Total: %.2f\n", total);
  printf("Average: %.2f", average);
  return 0;
}

