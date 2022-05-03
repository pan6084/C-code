//Input a 4-digit integer through keyboard and check if it's divisible by 2, 3, 4, and 12.

#include <stdio.h>
#include <math.h>

int main()
{
    int num;		//set variables
    
    printf("Enter any number : ");	//print number
    scanf("%d",&num);			//read entered number
    
    if((num%2==0) && (num%4==0) && (num%12==0))		//check no. is divisible or not
    {
        printf("\nEntered number is divisible by 2, 4, 12.\n");		//print no. if divisible
    }
    if(num%3==0)		//check no. is divisible by 3
    {
        printf("Entered number is divisible by 3.\n");		//print no. is divisible or not
    }else
    printf("Entered number is NOT divisible by 2, 3, 4, 12\n");		//print no. is no divisible
    return 0;
}