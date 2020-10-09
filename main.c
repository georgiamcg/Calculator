#include <stdio.h>

/* function declaration */
int plus(int num1, int num2);
int minus(int num3, int num4);
int multiply(int num5, int num6);
int divide(int num7, int num8);


int main(void) {
 // local vaiable definition
  int a = 10;
  int b = 20;
  int c = 40;
  int d = 30;
  int e = 5;
  int f = 6;
  int g = 70;
  int h = 35;

  int ADD; int TAKE; int TIMES; int SHARED;

  ADD = plus(a, b);
  TAKE = minus(c, d);
  TIMES = multiply(e, f);
  SHARED = divide(g, h);
 
 // calling funtion
  
  printf("Enter an addition :");
  scanf("%d", plus); 
  printf( "\nAnswer: %d", ADD);
 
  printf("Enter a subtraction :");
  scanf("%d", minus);
  printf("\nAnswer: %d", TAKE);

  printf("enter a multiplication :");
  scanf("%d", multiply);
  printf("\n Answer: %d", TIMES);

  printf("Enter a division :");
  scanf("%d", divide);
  printf("\n Answer: %d", SHARED);


  return 0;
}
/* function returning the calculation */
int plus(int num1, int num2)
{
  /* local variable decleration*/
  int ADD;

  
  return result;
}
