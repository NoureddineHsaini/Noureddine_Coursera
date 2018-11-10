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
 * @file < stats.h> 
 * @brief < in this file I declared all the project functions>
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

 *
 * @author <Noureddine HSAINI>
 * @date <07/11/2018 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__



 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *

 */
void print_statistics();
/**
 * @brief prints the array to the screen
 *
 * the role of this function is to display the array data on  the screen

 * @param test the arraye data
 * @param size the length of array

 */
void print_array(unsigned char  *test, int size);
/**
 * @brief Calculation of the median
 *
 * the role of this function is to Calculation of the median the array data and return the median value 

 * @param test the arraye data
 * @param size the length of array
 * @return Return the median of array

 */
unsigned char find_median(unsigned char *test, int size);
/**
 * @brief Calculation of the mean
 *
 * the role of this function is to Calculation of the mean the array data and return the mean value 

 * @param test the arraye data
 * @param size the length of array
 * @return Return the mean of array

 */
double  find_mean (unsigned char *test, int size);
/**
 * @brief Calculation of the maximum
 *
 * the role of this function is to Calculation of the maximum the array data and return the maximum value 

 * @param test the arraye data
 * @param size the length of array
 * @return Return the maximum of array

 */
unsigned char find_maximum (unsigned char *test, int size);
/**
 * @brief Calculation of the minimum
 *
 * the role of this function is to Calculation of the minimum the array data and return the minimum value 

 * @param test the arraye data
 * @param size the length of array
 * @return Return the minimum of array

 */
unsigned char find_minimum (unsigned char *test, int size);
/**
 * @brief sorts the array from largest to smallest 
 *
 * the role of this function is to sorts the array from largest to smallest and desplay new array 

 * @param test the arraye data
 * @param size the length of array


 */
void sort_array(unsigned char *test, int size);

#endif /* __STATS_H__ */
