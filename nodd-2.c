/*N odd numbers version-2

step-1: start
step-2: print "How many odd numbers you want to print? "
step-3: read Count
step-4: Counter = 1
step-5: OddNumber = 1
step-6: print "The first " + Count + " odd numbers are " + OddNumber
step-7: if Counter < Count
        OddNumber = OddNumber + 2
        print ", " + OddNumber
        Counter = Counter + 1
        goto step-7
step-8: print ".\n"
step-9: stop
 */

 #include<stdio.h>

int main()
{
        int count, odd=1, counter = 1;
        printf("How many odd numbers you want to print? ");
        scanf("%i", &count);
        printf("The first %i odd numbers are ",count);
        printf("%i", odd);
        while(counter < count)
        {
          odd = odd+2;
          printf(", %i", odd);
          counter= counter+1;

        } 
        printf(".\n");
 
        return 0;
}     
       