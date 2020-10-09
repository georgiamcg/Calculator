
#include <stdio.h>

/* function declaration */
int plus(int num1, int num2);
int minus(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);


int main(void) {
 // local vaiable definition
  int a = 10;
  int b = 20;
  int ret;

 // addition 
  ret = plus(a, b);
  printf("A+B = %d\n", ret);

 // subtraction
  ret = minus(a, b);
  printf("A-B = %d\n", ret);

  // multiply
  ret = multiply(a, b);
  printf("A*B = %d\n", ret);

  // divide
  ret = divide(a, b);
  printf("A/B = %d\n", ret);

 
  return 0;
}
/* function returning the addition */
int plus(int num1, int num2)
{
  /* local variable decleration*/
  int result;
  result = num1+num2;
  return result;
}

/* function returning subtraction*/
int minus(int num1, int num2)
{
  /* local variable decleration*/
  int result;
  result = num1-num2;
  return result;
}

/* function returning multiplication*/
int multiply(int num1, int num2)
{
  /* local varibale decleration*/
  int result;
  result = num1*num2;
  return result;
}

/* function retuning division*/
int divide(int num1, int num2)
{
  /* local variable decleration*/
  int result;
  result = num1/num2;
  return result;
}
