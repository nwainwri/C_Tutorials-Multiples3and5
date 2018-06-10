//
//  main.c
//  FizzBuzz
//
//  Created by Nathan Wainwright on 2018-06-09.
//  Copyright © 2018 Nathan Wainwright. All rights reserved.
//

/*
 Write a program that prints the numbers from 1 to 100. For the multiples of 3, print "Fizz" instead of the number and for the multiples of 5, print "Buzz" instead of the number. For numbers which are multiples of both 3 and 5 print "FizzBuzz"
 
 ROUGH NOTES::
If numprint is multiple of 3 print "Fizz"
 elseif numprint is multiple of 5 print "Buzz"
 elseif numprint is multiple of (3 check) and (5 check) print "FizzBuzz"
else "print numprint"
 
How to check if number is mutlipel of 3
How to check if number is multiple of 5
How to check if number is multiple of 3 AND 5

*/
#include <stdio.h>

int main(int argc, const char * argv[]) {

    int numberPrint = 1;

    do {
        if (((numberPrint %3) == 0) && ((numberPrint %5) == 0)){    // if testNum is a multiple of 3 AND 5 ; then print
            printf("FizzBuzz\n");
        }
        else if (((numberPrint %3) == 0) && ((numberPrint %5) != 0)) { // if testNum is a multiple of 3 BUT NOT 5; then print
            printf("Fizz\n");
        }
        else if (((numberPrint %3) != 0) && ((numberPrint %5) == 0)) { //if testNum is a multiple of 5 BUT NOT 3; then print
            printf("Buzz\n");
        }
        else {
            printf("Number is %d\n", numberPrint);
        }
        numberPrint++;
    } while(numberPrint < 101);
    
}
