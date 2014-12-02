// Selection Sort: Complexity O(n^2)
// Two loops: inner loop for all but last element of the ARRAY
// Outer loop for all but first element of the array. The value is always one greater than the outer loop
// Array is divided in to two parts: sorted and unsorted
//  The sorted part has 0 elements at the beginning
// Each element is compared with every other element in the array to determine the minimum element and to then
// put it in the beginning of the array
// CS50 video

#include<stdio.h>

#define SIZE 6

int main(void)
{
    int array[SIZE] ={16, 42, 24, 4, 8, 15};
    int i=0; // outer loop
    int j=0; // inner loop
    int locMin =0 ;
    int min =0;
    int k=0;
    int position=0;
    for(i=0;i < SIZE-1; i++)
    {
        min = array[i];
        for(j=i+1; j< SIZE; j++)
            if(min > array[j]) 
            {
                min = array[j];
                locMin = j;
            
            }

        array[locMin]= array[i]; 
        array[i]=min;
        locMin = i+1;
   } 
   for(i=0; i< SIZE; i++)
   {
       printf("%d\n", array[i]);
   }
}

// Better implementation
// This implementation remembers only the min position and not the value at the position
// Position is assigned the location of the start of each loop
// If the value is different at the end of the inner loop, then values are swapped
/*
int main(void)
{
    int array[SIZE] ={16, 42, 24, 4, 8, 15};
    int i=0; // outer loop
    int j=0; // inner loop
    int locMin =0 ;
    int min =0;
    int k=0;
    int position=0, temp =0;
    for(i=0;i < SIZE-1; i++)
    {
        position = i;
        for(j=i+1; j< SIZE; j++)
            if(array[position] > array[j])
            {
                // min = array[j];
                //locMin = j;
                 position = j;
            }

       // array[locMin]= array[i]; 
       // array[i]=min;
       // locMin = i+1;
         if (position != i )
         {
            temp = array[i];
            array[i]= array[position];
            array[position]= temp;
         }
   }
  for(i=0; i< SIZE; i++)
   {
       printf("%d\n", array[i]);
   }

}
*/
