#include <stdio.h>

/* function declaration */
int plus(int num1, int num2);
int minus(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);

int main(void) {
  
  /* local variable definition*/
  int a = 100;
  int b = 200;

  int ret;

  /* calling a function to choose calculation*/
  if ret = plus(a, b)
  {
  printf("A + B = %d\n", ret);
  }
  else if ret = minus(a, b)
  {
    printf("A - B = %d\n", ret);
  }
  else if ret = multiply(a, b)
  {
    printf("A * B = %d\n", ret);
  }
  else ret = divide(a, b)
  {
    printf("A / B = %3.2f\n", ret;)
  }


  return 0;
}
/* function returning the calculation */
int plus(int num1, int num2)
{
  /* local variable decleration*/
  int result;
  char plus = +;
  char minus = -;
  char multiply = *;
  char divide = /;

  printf("Enter a Calculation :");
  scanf("%c", plus, minus, multiply, divide); 
  printf( "\nAnswer: %d", result);

  if(+)
  result = num1+num2;
  else if (-)
  result = num2-num1;
  else if (*)
  result = num1*num2;
  else (/)
  result = num2/num1;

  return result;
}
