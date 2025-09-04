/*N power N
 
step-1: start
step-2: print "Enter a number for to compute  N^N: "
step-3: read Count
step-4: Counter = 1
step-5: Product = 1
step-6: print "The value of " + Count + " power " + Count + " is "
step-7: if Counter <= Count
        Product = Product * Count
        Counter = Counter + 1
        goto step-7
step-8: print Product + ".\n"
step-9: stop
*/

#include<stdio.h>

int main()
{
        int counter, product, count;

        printf("Enter a number for to compute N^N: ");
        scanf("%i", &count);
        printf("The value of %i power %i is ", count, count);
        counter = 1;
        product = 1;
        while(counter <= count)
        {
            product = product * count;
            counter = counter + 1;
        }
        printf("%i.\n", product);

        return 0;
}
