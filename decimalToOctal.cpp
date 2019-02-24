/*
OVERVIEW: 
1)Write a function which takes a decimal number as input and returns the octal number for decimalToOctal().
E.g.: decimalToOctal(10) returns 12.

2)Write a function which takes a fractional decimal number as input and returns the octal number for decimalToOctalFraction()
until precision two
E.g.: decimalToOctal(6.06) returns 6.03

INPUTS: Single decimal number num;

OUTPUT: Octal value of the Decimal Number num.

Discalimer:Return 0 for invalid cases.[Negetive Numbers]

There are no test cases for fraction method but it would be good if you complete that too.
*/
#include <stdio.h>
#include <stdlib.h>
int decimalToOctal(int num)
{
	if(num<=0)
    {
        return 0;
    }
    else
    {
        int r,c,n,i;
        int arr[100];
        c=0;
        while(num>0)
        {
            r=num%8;
            arr[c++]=r;
            num=num/8;
        }
        n=0;
        for(i=c-1;i>=0;i--)
        {
            n=n*10+arr[i];
        }
        return n;
    }
	return 0;
}


