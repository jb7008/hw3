/*
 * Programmer : Josh Booth      Date : Feb 25 , 2019
 * Instructor : Professor Hou   Class : ENGR 120 - 03
 *
 * Reports cartesian quadrant or axis an x, y point is on
 */

#include <stdio.h> /* Includes printf, scanf */

/* Defines quadrants */
#define QUADRANT_I 1
#define QUADRANT_II 2
#define QUADRANT_III 3
#define QUADRANT_IV 4

int find_quadrant(float x, float y); /* Finds the quadrant (x, y) lies in */

int
main(void)
{
  int quadrant; /* Quadrant (x, y) lies in */
  float x, /* X coordinate */
    y; /* Y coordinate */
  
  /* Gets x, y coordinate pair from user */
  printf("Please enter the coordinates, separate by a comma: ");
  scanf("%f, %f", &x, &y);

  if(x == 0)
  {
    if(y == 0){ /* If x and y are both 0 */
      printf("The point (%.2f, %.2f) lies at the origin.\n", x, y);
    }
    else /* If only x is 0 */
    {
      printf("The point (%.2f, %.2f) lies on the y-axis.\n", x, y);
    }
  }
  else if(y == 0){ /* If only y is 0 */
      printf("The point (%.2f, %.2f) lies on the x_axis.\n", x, y);
  }
  else{ /* If neither are 0 */
    quadrant = find_quadrant(x, y); /* Finds the quadrant (x, y) lies in */
    switch(quadrant){
      case 1:
      printf("The point (%.2f, %.2f) lies in quadrant I.\n", x, y);
      break;

      case 2:
      printf("The point (%.2f, %.2f) lies in quadrant II.\n", x, y);
      break;

      case 3:
      printf("The point (%.2f, %.2f) lies in quadrant III.\n", x, y);
      break;

      default:
      printf("The point (%.2f, %.2f) lies in quadrant IV.\n", x, y);

    }
  }

  return (0);
}

/* Finds the quadrant (x,y) lies in */
int
find_quadrant(float x, float y)
{
  if(x < 0) /* X is on the left side of cartesian plane */
  {
    if(y < 0) /* Left-side, below x-axis */
    {
      return(QUADRANT_III);
    }
    else /* Left-side, above x-axis */
    {
      return(QUADRANT_II);
    }
  }
  else /* X is on the right side of the cartesian plane */
  {
    if(y < 0) /* Right-side, below x-axis */
    {
      return(QUADRANT_IV);
    }
    else /* Right-side, above x-axis */
    {
      return(QUADRANT_I);
    }  
  }
}