#include <stdio.h>

/* function declaration */
int plus(int num1, int num2);
int minus(int num3, int num4);
int multiply(int num5, int num6);
int divide(int num7, int num8);

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
    printf("A / B = %d\n", ret;)
  }


  return 0;
}
/* function returning the calculation */
int plus(int num1, int num2)
{
  /* local variable decleration*/
  int result;

  printf("Enter an addition :");
  scanf("%d", plus); 
  printf( "\nAnswer: %d", result);
 
  printf("Enter a subtraction :");
  scanf("%d", minus);
  printf("\nAnswer: %d", result);

  printf("enter a multiplication :");
  scanf("%d", multiply);
  printf("\n Answer: %d", result);

  printf("Enter a division :");
  scanf("%d", divide);
  printf("\n Answer: %d",result);

  return result;
}
