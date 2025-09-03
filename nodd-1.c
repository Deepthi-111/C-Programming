/*N odd numbers version-1

step-1: start
step-2: print "How many odd numbers you want to print? "
step-3: read Count
step-4: Counter = 1
step-5: print "The first " + Count + " odd numbers are " + Counter
step-6: Counter = Counter + 1
step-7: if Counter <= Count
        OddNumber = 2 * Counter - 1
        print ", " + OddNumber
        goto step-6
step-8: print ".\n"
step-9: stop
*/



#include<stdio.h>

int main()
{
        int count, odd, counter = 1;
        printf("How many odd numbers you want to print? ");
        scanf("%i", &count);
        printf("The first %i odd numbers are ",count);
        printf("%i", counter);
        counter = counter + 1;
        while(counter <= count)
        {
          odd = 2*counter-1;
          printf(", %i", odd);
          counter= counter+1;

        } 
        printf(".\n");
 
        return 0;
}