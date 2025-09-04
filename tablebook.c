/*

step-1: start
step-2: print "Multiplication table book "
step-3: TableNuber = 1
step-4: print "The multiplication of " + TableNumber +"\n"
step-5: Counter = 1
step-6: if Counter <= 20
        Multiple = TableNumber * Counter
        print TableNumber + " x " + Counter + " = " + Multiple + "\n"
        Counter = Counter + 1
        goto step-6
step-7: print "\n"
step-8: if TableNumber <= 20
        TableNumber = TableNumber + 1
        goto step-5
step-9: stop
 */

 #include<stdio.h>

 int main()
 {
        int tablenumber, counter, multiple;

        printf("Multiplication table book.\n");
        tablenumber = 1;
        while(tablenumber <= 20)
        {
                multiple = tablenumber * counter;
                printf("The Multiplication of  %i \n", tablenumber);
                counter = 1;
                while(counter <= 20)
                {
                        multiple = tablenumber * counter;
                        printf(" %i X  %i = %i \n", tablenumber, counter, multiple);
                        counter = counter + 1;
                }
                printf("\n");
                tablenumber = tablenumber + 1;
        }

        return 0;
 }
