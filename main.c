// From Listing 9.4. Passing an Array to a Function; p.205
//

#include <stdio.h>

#define MAX 5

int array[MAX], count;

int largest(int num_array[], int length);

int main(void)
{
    //input max values from keyboard
    for(count=0; count<MAX; count++)
    {
        printf("Enter an integer value (up to %d values) - value %d of %d: ", MAX, count+1, MAX);
        scanf("%d", &array[count]);
    }
    //call the function and display the return value
    printf("\n\nLargest value = %d\n",largest(array,MAX));

    return 0;

}
//Function largest() returns the largest value in an integer array

int largest(int num_array[], int length)
{
    int count, biggest;

    for(count=0; count<length; count++)
    {
        if(count==0)
            biggest = num_array[count];
        if(num_array[count]>biggest)
            biggest = num_array[count];
        //other way to write this in pointer notation
        // REMEMBER: AN ARRAY NAME WITHOUT BRACKETS = IS A POINTER TO THE
        //     FIRST ELEMENT (ADDRESS) OF THE ARRAY --> *NUM_ARRAY = NUM_ARRAY[0],
        //     *(NUM_ARRAY+1)=NUM_ARRAY[1],*(NUM_ARRAY+2)=NUM_ARRAY[2]....
        //     AND NUM_ARRAY = &NUM_ARRAY[0] --> PG 194
        //     SEE PG. 203 PINK FOR MORE INFO
        if(count==0)
            biggest = *(num_array + count);
        if(num_array[count]>biggest)
            biggest = *(num_array + count);

    }
    return biggest;
}

