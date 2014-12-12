#include<iostream>
#include<assert.h>

using namespace std;

int main(void)
{
    int  x =0;
    int &r = x;
    int *p = &x;
    int *p2 = &r;
    assert(p==p2);
   
    return 0;

}
