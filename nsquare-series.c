/* N terms in Square series

step-1: start
step-2: print "How many terms you want to print square series? "
step-3: read Count
step-4: Counter = 1
step-5: print "The first " + Count + " terms in square series are " + Counter
step-6: Counter = Counter + 1
step-7: if Counter <= Count
        squareNumber = Counter * Counter
        print ", " + SquareNumber
        goto step-6
step-8: print ".\n"
step-9: stop
        
*/



#include<stdio.h>

int main()
{
        int count, counter, square_number;

        printf("How many terms  you want to print square series? ");
        scanf("%i", &count);
        printf("The square series of %i  terms are ", count);
        counter = 1;
        printf("%i",counter);
        counter = counter + 1;
        while(counter <= count)
        { 
                square_number = counter * counter;
                printf(", %i", square_number);
                counter = counter + 1;
        }
        printf(".\n");

        return 0;
}       