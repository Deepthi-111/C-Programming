/* Sum of natural numbers upto N

step-1: start
step-2: print "Enter number to print sum of natural numbers? "
step-3: read Count
step-4: Counter = 1
step-5: Sum = 0
step-6: print "The  Sum of natural numbers " + Count
step-7: if Counter <= Count
        Sum = Sum + Counter
        Counter = Counter + 1
        goto step-7
step-8: print Sum + "."
step-9: stop
*/

#include<stdio.h>

int main()
{
        int count, counter, sum;

        printf("Enter number to print sum of natural numbers? ");
        scanf("%i", &count);
        printf("The sum of  first %i natural numbers ", count);
        counter = 1;
        sum = 0;
        while(counter <= count)
        {
             sum = sum + counter;
             counter = counter + 1;
        }
        printf("%i.\n",sum);

        return 0;
}