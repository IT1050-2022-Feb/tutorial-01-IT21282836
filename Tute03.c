/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
//Function main begins program execution
int main() 
{
  int n, i, sum=0; //Variable declaration & initialization

  printf("Enter a value for 'n' : ");
  scanf("%d", &n); //Reads value for n

  for(i=0; i<n; ++i)
  {
    sum  += i+1; //Calculate sum
  }

  //Display sum
  printf("Sum of the numbers from 1 to n is : %d", sum);
  
  return 0;
} //End of main function

