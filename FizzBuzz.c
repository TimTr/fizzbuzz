/* This program will loop through some numbers, and then print:
 
 - "Fizz" for numbers divisible by 3
 - "Buzz" for numbers divisible by 5
 - "FizzBuzz" for numbers divisible by both 3 and 5
 - Just the current iteration number if none of the above applies

 https://imranontech.com/2007/01/24/using-fizzbuzz-to-find-developers-who-grok-coding/
 
From the command line, just type: `cc FizzBuzz.c` to run
*/

#include <stdio.h>

  
/** Implements the FizzBuzz algorithm in the (prettier) do...while syntax */
void use_doWhile(int number)
{
	int count = 1;
	do {
        if (count % 3 == 0)  printf("Fizz");
        if (count % 5 == 0)  printf("Buzz");
        if ((count % 3 != 0) && (count % 5 != 0)) printf("number=%d", count);
        printf("\n");
		count++;
        
	} while (count < number);
}

/** Implements the FizzBuzz algorithm using normal for...loop syntax */
void use_forLoop(int number)
{
    for (unsigned int count = 1; count <= number; count++) {
        if (count % 15 == 0) {
            printf("FizzBuzz\n");
        } else if (count % 3 == 0) {
            printf("Fizz\n");
        } else if (count % 5 == 0){
            printf("Buzz\n");
        } else {
            printf("%u\n", count);
        }
    }
}

/** Implements FizzBuzz in basically a single line of code. Technically, this isn't correct since it prints the number every time, when instead FizzBuzz is supposed to omit the current number if Fizz or Buzz applies. The implementation is still fun to track, anyway.
    */
void use_tinyCode(int number)
{
    for (int count = 1; count <= 100; count++)
    {
        printf("> %d %s%s\n", count, count%3?"":"Fizz", count%5?"":"Buzz");
    }
}

/** Pick from one of the available FizzBuzz algorithms from `main()`*/
int main(int argc, char *argv[]) {
	
	printf(" >>>> Starting the FizzBuzz.c use_tinyCode algorithm \n");
    use_tinyCode(100);
    printf(" >>>> Starting the FizzBuzz.c use_forLoop algorithm \n");
    use_forLoop(100);
    printf(" >>>> Starting the FizzBuzz.c use_doWhile algorithm \n");
    use_doWhile(100);
    
    printf("\n >>>> Finished FizzBuzz.c via SwiftPM \n");

    return(0);
}

