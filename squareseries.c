/* Square series upto N
step-1: start
step-2: print "Upto which number you want to print square series? "
step-3: read Count
step-4: Counter = 1
step-5: print "The square series upto "+ Count + " is " + Counter
step-6: Counter = Counter + 1
step-7: SquareNumber = Counter * Counter
step-8: if SquareNumber < Count
        print ", " + SquareNumber
        goto step-6
step-9: print ".\n"
step-10: stop
 */

 #include<stdio.h>

 int main()
 {
        int count, counter, square_number;

        printf("Upto which number you want to print square series? ");
        scanf("%i", &count);
        printf("The square series upto %i is ", count);
        counter = 1;
        printf("%i",counter);
        counter = counter + 1;
        while(counter * counter < count)
        { 
                square_number = counter * counter;
                printf(", %i", square_number);
                counter = counter + 1;
        }
        printf(".\n");

        return 0;
 }       