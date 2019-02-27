/*
 * Programmer : Josh Booth      Date : Feb 25 , 2019
 * Instructor : Professor Hou   Class : ENGR 120 - 03
 *
 * Categorizes user's BMI after calculating it
 */

#include <stdio.h> /* Includes prinf, scanf */

/* Defines breakpoints for the different levels */
#define UNDERWEIGHT_NORMAL_LINE 18.5
#define NORMAL_OVERWEIGHT_LINE 24.9
#define OVERWEIGHT_OBESE_LINE 29.9

float calc_bmi(int weight, int height); /* Calculates bmi */

int
main(void)
{
  int weight, /* Weight in pounds */
    height; /* Height in inches */
  float bmi; /* Body Mass Index */

  /* Gets weight in pounds */
  printf("Enter weight in pounds: ");
  scanf("%d", &weight);

  /* Gets height in inches */
  printf("Enter height in inches: ");
  scanf("%d", &height);

  /* Calculates BMI */
  bmi = calc_bmi(weight, height);

  /* Displays BMI along with where it falls on the chart */
  if (bmi < UNDERWEIGHT_NORMAL_LINE)
  {
    printf("%.1f Underweight.\n", bmi);
  }
  else if (bmi < NORMAL_OVERWEIGHT_LINE)
  {
    printf("%.1f Normal.\n", bmi);
  }
  else if (bmi < OVERWEIGHT_OBESE_LINE)
  {
    printf("%.1f Overweight.\n", bmi);
  }
  else
  {
    printf("%.1f Obese.\n", bmi);
  }

  return 0;
}

/* Calculates BMI */
float
calc_bmi(int weight, int height)
{
  /* Uses formula 703 * weight / height^2 */
  return((703.0 * weight) / (height * height));
}
