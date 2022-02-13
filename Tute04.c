/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

//Function declaration
int minimum(int no1, int no2);
int maximum(int no1, int no2);
int multiply(int no1, int no2);
//Function main begins program execution
int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
} //End of main function

//implementing minimum function
int minimum(int no1, int no2) {
  if(no1<no2)
  {
    return no1;
  }
  else
  {
    return no2;
  }
} //End of minimum function

//implementing maximum function
int maximum(int no1, int no2) {
  if(no1>no2)
  {
    return no1;
  }
  else
  {
    return no2;
  }
} //End of maximum function

//implementing multiply function
int multiply(int no1, int no2) {
  return no1 * no2;
} //End of multiply function