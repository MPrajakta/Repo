#include<iostream>
#include<assert.h>

using namespace std;

int main(void)
{
    int  x =0;
    int &r = x;
    int *p = &x;
    // address of the reference returns the address of the variable it is pointing to 
    int *p2 = &r;
    assert(p==p2);
   
    return 0;

}
