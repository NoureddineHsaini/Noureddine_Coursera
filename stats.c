/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file < stats.c > 
 * @brief <in this file I implemented all the project functions>


 *
 *  @Description: In this project I workedto write a couple of functions that can analyze an array of unsigned char data items and report   
               analytics on the maximum, minimum, mean, and median of the data set. These are the functions I programmed:
*    main() - The main entry point for your program
*    print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.
*    print_array() - Given an array of data and a length, prints the array to the screen
*    find_median() - Given an array of data and a length, returns the median value
*    find_mean() - Given an array of data and a length, returns the mean
*    find_maximum() - Given an array of data and a length, returns the maximum
*    find_minimum() - Given an array of data and a length, returns the minimum
*    sort_array() - Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the argest  
    value, and the last element (n-1) should be the smallest value. )


 * @author <Noureddine HSAINI>
 * @date <07/11/2018 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions */
void print_statistics(){
  
} 



}
/* Displaying elements of a table */
void print_array(unsigned char  *test, int size)
{
	
}
/* Calculation of the median */
unsigned char find_median(unsigned char *test, int size){
 

}



/* Calculation of the mean */
double  find_mean (unsigned char *test, int size)
{

}


/* Calculation of the maximum */
unsigned char find_maximum (unsigned char *test, int size)
{

}

/* Calculation of the minimum */
unsigned char find_minimum (unsigned char *test, int size)
{

	
}

/* sorts the array from largest to smallest */
void sort_array(unsigned char *test, int size){
  
      } 



}
