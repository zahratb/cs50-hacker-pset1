/*
    water.c
    
    Zahra T.
    zt37@njit.edu
    
    This file is a solution of the Smart Water problem from the
    hacker problem set1 of CS50.

    *********************************************************
    ** This program gets an integer number as input ( length of shower in minutes) from user.
    ** and then prints the equivalent number of bottles of water.
    
*/

#include<stdio.h>
#include<cs50.h>

int main(void)
{   
    int minutes=0;
    int bottles=0;
    int status;
    do
    {   
        printf("minutes=");
        minutes=GetInt();
    }while(minutes<=0);
    
    bottles=(min*1.5*128)/16;
    printf("bottles= %d\n",bottles);
    
    return(0);
    
    /*status=scanf(" %d", &min);
    if (status==1)
    {
        bottles=(min*1.5*128)/16;
        printf("bottles= %d\n",bottles);
    }
    else
    {
        printf("Input is not valid!\n");
    }
    */
    
}
