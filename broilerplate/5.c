#include <stdio.h>
#include <math.h>
unsigned int reversebytes(unsigned int bytes)
{
    unsigned int num = 0;
    unsigned int byte;
    int i;

    for(i = 0; i < 32; i+=8)
    {
        byte = (bytes >> i) & 0xff;
        num |= byte << (32 - 8 - i);
    }
    return num;
}
unsigned int reverseBits(unsigned int num) 
{ 
    
    unsigned int new = 0, i, temporary_number; 
  
    for (i = 0; i < 32; i++) 
    { 
        temporary_number = (num & (1 << i)); 
        if(temporary_number) 
            new |= (1 << ((32 - 1) - i)); 
    } 
   
    return new; 
} 
  
int main()
{
    unsigned int N,a=0,r,i,n;
    scanf("%u",&N);
    n = N;
    for(i=0;N>0;i++)
    {
        r = N%2;
        a += r*pow(10,i);
        N = N/2;

    }
    printf("%.36d\n",a);
    printf("%u\n", reverseBits(n)); 
    printf("%u\n",reversebytes(n));
    
}