/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.

e.g.

Distance -> 20
Amount = 20 x 50 = 1000

Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>
//Function main begins program execution
int main() 
{
  float distance, payment; //Variable declaration

  printf("Enter the travelled distance : ");
  scanf("%f", &distance); //Reads distance

  if(distance >= 0 && distance <= 30) 
  {
    //Calculate & display payment if (distance <= 30)
    payment = distance * 50;
    printf("Payment : %.2f", payment);
  }
  else if(distance > 30)
  {
    //Calculate & display payment if (distance > 30)
    payment = 30 * 50 + (distance - 30) * 40; 
    printf("Payment : %.2f", payment);
  }
  else 
  {
    //If distance is an invalid value
    printf("Invalid Input\n");
  }
  
  return 0;
} //End of main function
