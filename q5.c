/*
 * Programmer : Josh Booth      Date : Feb 25 , 2019
 * Instructor : Professor Hou   Class : ENGR 120 - 03
 *
 * Categorizes an earthquake based on its Richter scale number
 */

#include <stdio.h> /* Includes printf, scanf */

/* Defines different destruction levels */
#define LEVEL_1 5.0
#define LEVEL_2 5.5
#define LEVEL_3 6.5
#define LEVEL_4 7.5


void print_damage(double magnitude); /* Prints classification of damage based on
  magnitude */

int
main(void)
{
  double magnitude; /* Magnitude of an earthquake on the Richter scale */

  /* Gets the magnitude on the Richter scale */
  printf("Enter the number on the Richter scale> ");
  scanf("%lf", &magnitude);

  print_damage(magnitude); /* Prints classification of damage based on
    magnitude */

  return(0);
}

/* Prints classification of damage based on magnitude */
void
print_damage(double magnitude)
{
  if(magnitude < LEVEL_1)
  {
    printf(" [%.1f] -- Little or no damage. \n", magnitude);
  }
  else if(magnitude < LEVEL_2)
  {
    printf(" [%.1f] -- Some damage. \n", magnitude);
  }
  else if(magnitude < LEVEL_3)
  {
    printf(" [%.1f] -- Serious damage: \n"
    "       walls may crack or fall.\n", magnitude);
  }
  else if(magnitude < LEVEL_4)
  {
    printf(" [%.1f] -- Disaster: \n"
    "       houses and buildings may collapse.\n", magnitude);
  }
  else
  {
    printf(" [%.1f] -- Catastrophe:  \n"
    "       most buildings destroyed.\n", magnitude);
  }
}