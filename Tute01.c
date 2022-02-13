/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
#define SIZE 2
//Function main begins program execution
int main() 
{
  int markArr[SIZE]; //Array declaration
  //Variable declaration & initialization
  int i, total=0;
  float avg=0;

  //Read marks & calculate total for two subjects 
  for(i=0; i<SIZE; ++i)
  {
    printf("Enter mark for subject %d : ", i+1);
    scanf("%d", &markArr[i]); //Reads mark

    total += markArr[i];//Calculate total
  }
  
  //Calculate average
  avg = (float)total / SIZE;

  //Display average
  printf("Average : %.2f\n", avg);
  
  return 0;
} //End of main function

