/*
 * Programmer : Josh Booth      Date : Feb 25 , 2019
 * Instructor : Professor Hou   Class : ENGR 120 - 03
 *
 * Identifies substance based on boiling point
 */

#include <stdio.h> /* Includes printf, scanf */

/* Boiling points of common substances */
#define WATER_BOILING_POINT 100
#define MERCURY_BOILING_POINT 357
#define COPPER_BOILING_POINT 1187
#define SILVER_BOILING_POINT 2193
#define GOLD_BOILING_POINT 2660

/* Calculates if data is percent% within ref */
int within_x_percent(int ref, int data, int percent);

int
main(void)
{
  int boiling_point, /* Boiling point of a substance */
    percent_error; /* Percent error allowed from boiling substance */

  /* Gets boilding point */
  printf("Enter boiling point: ");
  scanf("%d", &boiling_point);

  /* Gets percent the boiling point can vary by */
  printf("Enter range in percentage: ");
  scanf("%d", &percent_error);

  /* Within water's boiling point */
  if(within_x_percent(WATER_BOILING_POINT, boiling_point, percent_error))
  {
    printf("Water\n");
  }
  /* Within mercury's boiling point */
  else if(within_x_percent(MERCURY_BOILING_POINT, boiling_point, percent_error))
  {
    printf("Mercury\n");
  }
  /* Within copper's boiling point */
  else if(within_x_percent(COPPER_BOILING_POINT, boiling_point, percent_error))
  {
    printf("Copper\n");
  }
  /* Within silver's boiling point */
  else if(within_x_percent(SILVER_BOILING_POINT, boiling_point, percent_error))
  {
    printf("Silver\n");
  }
  /* Within gold's boiling point */
  else if(within_x_percent(GOLD_BOILING_POINT, boiling_point, percent_error))
  {
    printf("Gold\n");
  }
  else{ /* In none of the substances' boiling points */
    printf("Substance unknown\n");
  }


  return(0);
}


int
within_x_percent(int ref, int data, int percent)
{
  float ref_min, /* Upper value for ref + 10% of ref */
    ref_max; /* Lower value for ref - 10% of ref */

  /* Converts percent to a percent, and subtracts 10% of ref from ref */
  ref_min = ref - (ref * (percent / 100.0));
  /* Converts percent to a percent, and adds 10% of ref from ref */
  ref_max = ref + (ref * (percent / 100.0));

  if(data >= ref_min && data <= ref_max)
  {
    return (1); /* data  is within range */
  }
  else
  {
    return (0); /* data is out of range */
  }
}