/*
 * Programmer : Josh Booth      Date : Feb 25 , 2019
 * Instructor : Professor Hou   Class : ENGR 120 - 03
 *
 * Demonstrates C's short - circuit evaluation of && and ||
 */

#include <stdio.h> /* Includes printf, scanf */

int fun1(void); /* Returns 1 if T is entered, 0 if F is entered */
int fun2(void); /* Displays "fun2 executed" and returns 1 */

int
main(void)
{
  /* Tests && */
  printf("Testing &&\n");
  if(fun1() && fun2())
  {
    printf("Test of && complete\n");
  }
  /* Tests || */
  printf("Testing ||\n");
  if(fun1() || fun2())
  {
    printf("Test of || complete\n");
  }

  return 0;
}

/* Returns 1 if T is entered, 0 if F is entered */
int
fun1(void)
{
  char input_char; /* Holds input T or F */

  /* Reads input */
  printf("Enter T or F: ");
  scanf("%c", &input_char);
  getchar(); /* Removes \n from buffer since function is called twice */
  return(input_char == 'T' ? 1 : 0); /* Returns 1 if true, 0 if false */
}

/* Displays "fun2 executed" and returns 1 */
int
fun2(void)
{
  printf("fun2 executed\n");
  return (1);
}
