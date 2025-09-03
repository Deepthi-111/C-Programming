/*N even numbers version-2

step-1: start
step-2: print "How many even numbers you want to print? "
step-3: read Count
step-4: Counter = 1
step-5: EvenNumber=0
step-6: print "The first " + Count + " even numbers are " + EvenNumber
step-7: if Counter < Count
        EvenNumber = EvenNumber+2
        print ", " + EvenNumber
        Counter = Counter + 1
        goto step-7
step-8: print ".\n"
step-9: stop
      
*/

#include<stdio.h>

int main()
{

  int count, counter = 1, even_number = 0;

   printf("How many even numbers you want to print? ");
   scanf("%i", &count);
   printf("The first %i even numbers are ", count);
   printf("%i", even_number);
   while(counter < count)
   {
      even_number = even_number + 2;
      printf(", %i", even_number);
      counter = counter + 1;
   }
   printf(".\n");

   return 0;
}       

