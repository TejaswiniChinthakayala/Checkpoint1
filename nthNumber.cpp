/*
Given a value n

1. return nth Fibonacci number for the function nthFibonacci(int)
	EX: 0 for n=1 and 1 for n=2


2. return nth prime number for the function nthPrime(int)
	EX: 2 for n=1 and 3 for n=2

INPUTS: single integer n

OUTPUTS: nth Fibonacci number for nthFibonacci() 
		 nth prime number for nthPrime()

ERROR CASES: return -1 for the error cases
*/

int nthFibonacci(int n)
{
	if(n<=0)
    {
        return -1;
    }
    else if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        int a,b,c;
        a=0;
        b=1;
        int count;
        int temp;
        count=2;
        while(count<n)
        {
            c=a+b;
            temp=b;
            b=c;
            a=temp;
            count++;
        }
        return c;
    }
}

int nthPrime(int num)
{
	 int c,count,x;
    c=count=0;
    x=2;
    while(c!=n){
        for(int i=2;i<x;i++){
            if(x%i==0){
                count=1;
            }
        }
        if(count!=1){
            c++;
            if(c==n){
                return x;
            }
        }
        count=0;
        x++;
    }
    return -1;
}