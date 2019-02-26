/*
 * Programmer : Josh Booth      Date : Feb 25 , 2019
 * Instructor : Professor Hou   Class : ENGR 120 - 03
 *
 * Categorizes user's BMI after calculating it
 */

#include <stdio.h> /* Includes prinf, scanf */

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
  if (bmi < 18.5){
    printf("%.1f Underweight.\n", bmi);
  }
  else if (bmi < 24.9){
    printf("%.1f Normal.\n", bmi);
  }
  else if (bmi < 29.9){
    printf("%.1f Overweight.\n", bmi);
  }
  else{
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
