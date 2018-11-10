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
 printf("maximum is: %d\n", find_maximum (test, SIZE));
 printf("minimum is: %d\n", find_minimum (test, SIZE));
printf("maximum is: %d\n", find_median (test, SIZE));
printf("mean is: %f\n", find_mean (test, SIZE));
  
} 
print_array(test, SIZE);
print_statistics();
sort_array(test, SIZE);


}
/* Displaying elements of a table */
void print_array(unsigned char  *test, int size)
{
	int i;
	printf("\n");
        printf("Displaying elements of a table ");
	for (i=0; i<size; i++)
	{
		printf ("test[%d] = %d\n", i, test[i]);
	}
	printf("\n");
	
}
/* Calculation of the median */
unsigned char find_median(unsigned char *test, int size){
 unsigned short int TailleUtile = 0 ;     
                 
 int NombreEstIdentique = 0;   


for (int Iteration=0; Iteration<size ;Iteration++){

  if (Iteration==0)     
   {

    TailleUtile ++ ;        
   }

  else      
   {  
    NombreEstIdentique = 0 ;
   
    for (int Iteration2=0 ; Iteration2<TailleUtile ; Iteration2++)
    {
     if ( test[Iteration]== test[Iteration2] )    
      NombreEstIdentique = 1 ;
    }

    if (NombreEstIdentique == 0)     
     {
     test[TailleUtile]= test[Iteration] ;   
     TailleUtile++ ;        
     }
   } 
}

unsigned short int Element_A_Comparer=1 ;
unsigned short int swap=0 ;                    

for (unsigned short int Element_De_Reference=0; Element_De_Reference< TailleUtile-1 ; Element_De_Reference ++)


{
 
  while (Element_A_Comparer < (TailleUtile))   
  {


   if ( test[Element_A_Comparer] < test[Element_De_Reference] )  
                 
    {
 
    swap = test[Element_De_Reference] ;
    test[Element_De_Reference] = test [Element_A_Comparer];
    test[Element_A_Comparer] = swap ;
    }
  
   else                                                                
    {
    Element_A_Comparer ++ ;
    }


  }




Element_A_Comparer = Element_De_Reference + 1 ;  
}
 


printf("\n");


   
  return  test[TailleUtile/2] ;

}



/* Calculation of the mean */
double  find_mean (unsigned char *test, int size)
{
	double moyen, somme;
	int i;
	somme = 0;
	for (i=0; i<size; i++)
	{
		somme = somme + test[i];
	}
	moyen = somme / size;
	return moyen;
}


/* Calculation of the maximum */
unsigned char find_maximum (unsigned char *test, int size)
{
	unsigned char val_max;
	int i;
	val_max = test[0];
	for (i=0; i<size; i++)
	{
		if (test[i] > val_max)
		{
	 		val_max = test[i];
		}
	}
	
	return val_max;
}

/* Calculation of the minimum */
unsigned char find_minimum (unsigned char *test, int size)
{
	unsigned char val_min;
	int i;
	val_min = test[0];
	
	for (i=0; i<size; i++)
	{
		if (test[i] < val_min)
		{
			val_min = test[i];
		}
		
	}
	return  val_min;
	
}

/* sorts the array from largest to smallest */
void sort_array(unsigned char *test, int size){
  int d=0, tmp=0, i=0;
    for(d=size;d!=0; d--)
      {
       for(i=0;i<d; i++)
         {
          if(test[i]<test[i+1])
             {
              tmp=test[i];
              test[i]=test[i+1];
              test[i+1]=tmp;
             }
        }
      }
    printf("sorts the array from largest to smallest\n");
    for(i=0;i<size;i++)
      {
       printf("%d\n", test[i]);
      } 



}
