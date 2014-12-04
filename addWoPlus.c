#include<stdio.h>

int addWoPlus(int x , int y)
{
    int carry =0; 

    while( y != 0)
    {
        
            carry = x & y;
            x = x ^ y;
            y = carry << 1;
    }
    return x;
}
int main(void)
{
    int sum = addWoPlus(1,3); 
    printf("Sum = %d\n", sum);
    return 0;
}
