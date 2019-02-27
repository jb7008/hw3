/*
 * Programmer : Josh Booth      Date : Feb 25 , 2019
 * Instructor : Professor Hou   Class : ENGR 120 - 03
 *
 * Reports the contents of a compressed - gas cylinder based on the first letter
 * of the cylinder's color
 */

#include <stdio.h> /* Includes printf, scanf */

void print_contents(char color); /* Prints the contents of the cylinder based 
  on color */

int
main(void)
{
  char color; /* Color of the cylinder */

  /* Gets the color of the cylinder */
  printf("Enter the first letter of the cylinder's color: ");
  scanf("%c", &color);

  printf("\n"); /* Newline for formatting */

  print_contents(color); /* Prints the contents of the cylinder based on 
    color */

  return(0);
}

/* Prints the contents of the cylinder based on color */
void
print_contents(char color)
{
  switch(color){
    case 'o': case 'O':
      printf("This cylinder contains ammonia.\n");
      break;
    case 'b': case 'B':
      printf("This cylinder contains carbon monoxide.\n");
      break;
    case 'y': case 'Y':
      printf("This cylinder contains hydrogen.\n");
      break;
    case 'g': case 'G':
      printf("This cylinder contains oxygen.\n");
      break;
    default:
      printf("Contents unknow.\n");
  }
}