/*N even numbers version-1

step-1: start
step-2: print "How many even numbers you want to print? "
step-3: read Count
step-4: Counter = 0
step-5: print "The first " + Count + " even numbers are " + Counter
step-6: Counter = Counter + 1
step-7: if Counter < Count
        EvenNumber = 2 * Counter
        print ", " + EvenNumber
        goto step-6
step-8: print ".\n"
step-9: stop
*/

#include<stdio.h>

int main()
{
   int count, even_number, counter = 0;

   printf("How many even numbers you want to print? ");
   scanf("%i", &count);
   printf("The first %i even numbers are ", count);
   printf("%i", counter);
   counter = counter+1;
   while(counter < count)
   {
     even_number = 2 * counter;
     printf(", %i", even_number);
     counter = counter + 1;
   }
   printf(".\n");

   return 0;
}
