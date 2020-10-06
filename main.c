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

  if(num1 + num2 = 300)
  result = num1+num2;
  else if (num2 - num1 = 100)
  result = num2-num1;
  else if (num1 * num2 = 200)
  result = num1*num2;
  else (num2 / num1 = 2)
  result = num2/num1;

  return result;
}
