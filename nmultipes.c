/*N multiples of 7

step-1: start
step-2: print "How many multiples of 7 you want to print? "
step-3: read Count
step-4: Counter = 1
step-5: read Multiplier = 7
step-6: print "The first " + Count + " multiples of 7 are " + Multiplier
step-7: Counter = Counter + 1
step-8: if Counter <= Count 
        Product = Counter * Multiplier
        print ", " + Product
        goto step-7
step-9: print ".\n"
step-10: stop

 */

 #include<stdio.h>

int main()
{
        int count, counter, multiplier, product;

        printf("How many multiple of 7 you want to print? ");
        scanf("%i", &count);
        printf("The first %i multiples of 7 are ", count);
        multiplier = 7;
        printf("%i",multiplier);
        counter = 1;
        counter = counter + 1 ;
        while(counter <= count)
        {
                product = counter * multiplier;
                printf(", %i", product);
                counter = counter + 1;

        }
        printf(".\n");

        return 0;
}