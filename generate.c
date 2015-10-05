/**
 * 
 *  generate.c
 *
 * J. Bobula
 * Exit32 Studio
 * contact@exit32studio.com
 *
 * Generates an array of random numbers.  Use the command line to tell the program how many numbers to generate
 *
 **/
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <cs50.h>
 
 int main (int argc, char* argv[])
 {
    //Make sure a number was passed in from the command line
    if (argc > 1)
    {
        //Grab the total number of random numbers requested
        printf("Enter number: ");
        int end = GetInt();
        for (int i = 0; i < end; i++)
        {
            //Grab a random number from the seed and print
            long int seed = 145;
            srand48(seed);
            int number = nrand48();
            printf("%d\n", number);
        }
    }
    else
    {
        printf("I need a number\n");
    }
 }
 
 
