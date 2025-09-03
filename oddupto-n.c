/*
Odd numbers up to N
step-1: start
step-2: print "How many odd numbers you want to print upto N? "
step-3: read Count
step-4: Counter = 1
step-5: print "The odd numbers upto " + Count + " are " + Counter
step-6: Counter =  Counter + 2
step-7: if Counter <= Count
          print ", " + Counter 
          goto  step-6
step-8: print "."
step-9: stop
*/


#include<stdio.h>

int main()
{
  int count, counter = 1;

  printf("How many odd numbers you want to print upto N? ");
  scanf("%i", &count);
  printf("The odd numbers upto %i are ", count);
  printf("%i", counter );
  counter = counter + 2;
  while(counter <= count)
  {
    printf(", %i", counter);
    counter = counter + 2;
  }
  printf(".\n");

  return 0;
}