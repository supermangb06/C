#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year)
{
if (year % 4 == 0){
  return true;}
  else if (year % 100 == 0){
    return true;
  }
  else if (year % 400 != 0 && year % 100 == 0){
    return false;
  }
  else{
  return false;}
  }

int main() {
  int year;
  printf("Please enter a year between 1800-10000"); 
  scanf("%d", &year);
  is_leap_year(year); 
  if (is_leap_year = true){
    printf("This is a leap year!");}
    else
    {printf("Not a leap year");
    }
  }

