/*
step-1: start
step-2: print "How many natural numbers you want to print? "
step-3: read Count
step-4: Counter = 1
step-5: print "The first " + Count + " natural numbers  are "
step-6: if Counter < Count
          print Counter + ", "
          Counter + 1
          goto  step-6
step-7: print Counter + ".\n"
step-8: stop 
*/


#include<stdio.h>

int main()
{
  int count, counter = 1;

  printf("How many natural numbers you want to print? ");
  scanf("%i", &count);
  printf("The first %i natural numbers are ", count);
  while(counter < count)
  {
    printf("%i, ", counter);
    counter = counter + 1;
  }
  printf("%i.\n", counter);

  return 0;
}