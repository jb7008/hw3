/*
 * Programmer : Josh Booth      Date : Feb 25 , 2019
 * Instructor : Professor Hou   Class : ENGR 120 - 03
 *
 * Finds if pollution level is above appropriate value
 */

#include <stdio.h> /* Includes printf, scanf */

/* Constants for emission allowed in grams/mile */
#define CARBON_MONOXIDE_FIRST_50K 3.4
#define CARBON_MONOXIDE_SECOND_50K 4.2
#define HYDROCARBONS_FIRST_50K 0.31
#define HYDROCARBONS_SECOND_50K 0.39
#define NITROGEN_OXIDES_FIRST_50K 0.4
#define NITROGEN_OXIDES_SECOND_50K 0.5
#define NONMETHANE_HYDROCARBONS_FIRST_50K 0.25
#define NONMETHANE_HYDROCARBONS_SECOND_50K 0.31

/* Finds emission for less than 50k miles */
void find_short_emissions(int pollutant_number, float grams_per_mile);
/* Finds emission for more than 50k miles */
void find_long_emissions(int pollutant_number, float grams_per_mile);

int
main(void)
{
  int pollutant_number; /* Number corresponding to type of emission */
  float grams_per_mile, /* Number of grams emitted per mile */
    odometer; /* Odometer reading */

  /* Displays pollutant options */
  printf("(1) Carbon monoxide\n");
  printf("(2) Hydrocarbons\n");
  printf("(3) Nitorgen oxides\n");
  printf("(4) Nonmethane hydrocarbons\n");

  /* Gets pollutant option number */
  printf("Enter pollutant number>> ");
  scanf("%d", &pollutant_number);

  /* Gets grams emitted per mile */
  printf("Enter number of grams emitted per mile>> ");
  scanf("%f", &grams_per_mile);

  /* Gets odomter reading */
  printf("Enter odometer reading>> ");
  scanf("%f", &odometer);

  if(odometer < 50000) /* Finds emission for less than 50k miles */
  {
    find_short_emissions(pollutant_number, grams_per_mile);
  }
  else /* Finds emission for more than 50k miles */
  {
    find_long_emissions(pollutant_number, grams_per_mile);

  }

  return(0);
}

/* Finds emission for less than 50k miles */
void
find_short_emissions(int pollutant_number, float grams_per_mile)
{
  switch(pollutant_number)
  {
    case 1: /* Pollutant is carbon monoxide */
      if(grams_per_mile > CARBON_MONOXIDE_FIRST_50K) /* If exceeds allowed 
        amount */
      {
        printf("Emissions exceed permitted level of %.2f grams/mile\n",
          CARBON_MONOXIDE_FIRST_50K);
      }
      else /* Does not exceed allowed amount */
      {
        printf("Emissions did not exceed permitted level of %.2f grams/mile\n", 
          CARBON_MONOXIDE_FIRST_50K);
      }
      break;

    case 2:
      if(grams_per_mile > HYDROCARBONS_FIRST_50K) /* If exceeds allowed 
        amount */
      {
        printf("Emissions exceed permitted level of %.2f grams/mile\n",
          HYDROCARBONS_FIRST_50K);
      }
      else /* Does not exceed allowed amount */
      {
        printf("Emissions did not exceed permitted level of %.2f grams/mile\n",
          HYDROCARBONS_FIRST_50K);
      }
      break;

    case 3:
      if(grams_per_mile > NITROGEN_OXIDES_FIRST_50K) /* If exceeds allowed 
        amount */
      {
        printf("Emissions exceed permitted level of %.2f grams/mile\n",
          NITROGEN_OXIDES_FIRST_50K);
      }
      else /* Does not exceed allowed amount */
      {
        printf("Emissions did not exceed permitted level of %.2f grams/mile\n",
          NITROGEN_OXIDES_FIRST_50K);
      }
      break;

    case 4:
      if(grams_per_mile > NONMETHANE_HYDROCARBONS_FIRST_50K) /* If exceeds 
        allowed amount */
      {
        printf("Emissions exceed permitted level of %.2f grams/mile\n",
          NONMETHANE_HYDROCARBONS_FIRST_50K);
      }
      else /* Does not exceed allowed amount */
      {
        printf("Emissions did not exceed permitted level of %.2f grams/mile\n",
          NONMETHANE_HYDROCARBONS_FIRST_50K);
      }
      break;
    default: /* Invalid pollutant option */
      printf("No such pollutant!\n");
  }
}


/* Finds emission for more than 50k miles */
void
find_long_emissions(int pollutant_number, float grams_per_mile)
{
  switch(pollutant_number)
  {
    case 1: /* Pollutant is carbon monoxide */
      if(grams_per_mile > CARBON_MONOXIDE_SECOND_50K) /* If exceeds allowed 
        amount */
      {
        printf("Emissions exceed permitted level of %.2f grams/mile\n",
          CARBON_MONOXIDE_SECOND_50K);
      }
      else /* Does not exceed allowed amount */
      {
        printf("Emissions did not exceed permitted level of %.2f grams/mile\n",
          CARBON_MONOXIDE_SECOND_50K);
      }
      break;

    case 2:
      if(grams_per_mile > HYDROCARBONS_SECOND_50K) /* If exceeds allowed 
        amount */
      {
        printf("Emissions exceed permitted level of %.2f grams/mile\n",
          HYDROCARBONS_SECOND_50K);
      }
      else /* Does not exceed allowed amount */
      {
        printf("Emissions did not exceed permitted level of %.2f grams/mile\n",
          HYDROCARBONS_SECOND_50K);
      }
      break;

    case 3:
      if(grams_per_mile > NITROGEN_OXIDES_SECOND_50K) /* If exceeds allowed 
        amount */
      {
        printf("Emissions exceed permitted level of %.2f grams/mile\n",
          NITROGEN_OXIDES_SECOND_50K);
      }
      else /* Does not exceed allowed amount */
      {
        printf("Emissions did not exceed permitted level of %.2f grams/mile\n",
          NITROGEN_OXIDES_SECOND_50K);
      }
      break;

    case 4:
      if(grams_per_mile > NONMETHANE_HYDROCARBONS_SECOND_50K) /* If exceeds 
        allowed amount */
      {
        printf("Emissions exceed permitted level of %.2f grams/mile\n",
          NONMETHANE_HYDROCARBONS_SECOND_50K);
      }
      else /* Does not exceed allowed amount */
      {
        printf("Emissions did not exceed permitted level of %.2f grams/mile\n",
          NONMETHANE_HYDROCARBONS_SECOND_50K);
      }
      break;

    default: /* Invalid pollutant option */
      printf("No such pollutant!\n");

  }
}
