/*
    credit.c
    
    Zahra T.
    zt37@njit.edu
    
    This file is a solution of the Bad Credit problem from the
    hacker problem set1 of CS50.

    *********************************************************
    ** This program checks the validity of an input number as a credit card number.
    ** If the input number is valid the type of the credit card(AMEX,MASTERCARD, or VISA) will appear.
    ** If the number is not a valid credit card number the output message shows "INVALID".
*/


#include<stdio.h>
#include<cs50.h>

int main(void)
{   
    long long card_num;
    int num_digits=0;       
    int digit=0;
    int digit_even_Loc;   // digit in the even location
    int sum=0;
    string  output_msg="";
    int first_two_digits=0;

    printf("Number=");
    card_num=GetLongLong();

    while(card_num >=10 )
    {
        digit=card_num % 10;
        card_num=card_num / 10;
        num_digits++;
       
        if ((num_digits % 2) ==0)
        {   
            digit_even_Loc=digit;
            digit_even_Loc=(digit_even_Loc*2);
            sum= (digit_even_Loc % 10) + (digit_even_Loc / 10) + sum;
        } 
        else
        {
            sum=sum+digit;
        }
    }
    
    first_two_digits =(card_num*10 + digit);
    digit= (int) card_num;
    num_digits++;
    
    if ((num_digits % 2) ==0)   // check if the last digit of the card number has even location 
    {   
        digit_even_Loc=digit;
        digit_even_Loc=(digit_even_Loc * 2);
        sum= (digit_even_Loc % 10) + (digit_even_Loc / 10) + sum;
    } 
    else
    {
        sum=sum+digit;
    }
    
        
    // check if number of digits is greater than 13 and sum modulo 10 is zero and create the output message.
    if (sum % 10 == 0 && num_digits >= 13)
    {
        if (card_num==4)
            {   output_msg="VISA\n";   }

        else if (first_two_digits == 34 ||  first_two_digits == 37)
            {   output_msg="AMEX\n";   }
            
        else if (first_two_digits >= 51 && first_two_digits <= 55 )
            {   output_msg="MASTERCARD\n";    }   
    }
    else
    {
        output_msg="INVALID\n";
    }
    

    printf("%s",output_msg);
 
    
    return(0);
    
    
}
