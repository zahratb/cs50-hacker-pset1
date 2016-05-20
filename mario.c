/*
    mario.c
    
    Zahra T.
    zt37@njit.edu
    
    This file is a solution of the Itsa Mario problem from the
    hacker problem set1 of CS50.

    *********************************************************
    ** It take the height from user and prints the  two half-pyramids.
*/


#include<stdio.h>
#include<cs50.h>

int main(void)
{   
    int height=0;
    
    do
    {
        printf("Enter the height (a positive number less than 24): ");
        height=GetInt();
        
    }while(height<0 || height>23);
    
    
    for (int i =1; i<=height; i++)
    {
        for (int space=1; space<=height-i; space++)     // (lines 36 to 39) create the left half-pyramid 
            {   printf(" ");    }
        for (int j=1; j<=i; j++)
            {   printf("#");  }
        
        printf("  ");                                   // print the gap between two half-pyramids
       
        for (int j=1; j<=i; j++)                        // create the right half-pyramid
            {   printf("#");  }
        
        printf("\n");
    }
    
    return (0);
}
