/******************************************************************************
* Function Title: EAN
*
* Summary: compute the check digit of the EAN number
*
* Inputs: 12 integers
* Outputs: Check digit
*
* Compile instructions: within Visual Studios
*
*******************************************************************************
* Pseudocode 
* Begin
*   Declare Variables
*   Prompt user for input
*   Scan 12 single digit integer input values
*   Perform computations necessary for check value
*   Print check value to screen
* End
******************************************************************************/

#include <stdio.h>

int main(void)
{//begin
    //declare variables
    int check, sum1, sum2;
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12;
    //prompt user for input
    printf("Enter the first 12 digits of the EAN number: ");
    //scan 12 single digit integer input values
    scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&i1,&i2,&i3,&i4,&i5,&i6,&i7,
        &i8,&i9,&i10,&i11,&i12);
    // perform computations necessary for check value
    sum1 = i2 + i4 + i6 + i8 + i10 + i12;
    sum2 = i1 + i3 + i5 + i7 + i9 + i11;
    sum1 *= 3;
    check = sum1 + sum2;
    check -= 1;
    check %= 10;
    check = 9 - check;
    //print check value to screen
    printf("Check sum value: %d\n", check);
}//end