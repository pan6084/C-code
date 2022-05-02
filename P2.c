//Input 5 integers through keyboard, and display the second largest number.

#include <stdio.h>
#include <math.h>

int main()
{
	// Set Variables
	int n[5];
	int i, j, temp;

	// Read inputs
	printf("Enter any 5 integers :\n");
	scanf("%d%d%d%d%d",&n[1], &n[2], &n[3], &n[4], &n[5]);
	//printf("Array= %d", n);

    for(i=0; i<5; i++) //starting 1st array elements to last one
	{
	    for(j=i+1; j<6; j++)//increasing array elements
	    {
	        if(n[i]<n[j])	//compare every element in array to next one
	        {
	            temp=n[i];
	            n[i]=n[j];
	            n[j]=temp;
	        }
	    }
	}
   // printf("Integers in descending order : \n");
    //for(i=0; i<5; i++)
   // {
     //   printf("%d\n",n[i]);
   // }
    printf("Second largest no. is %d\n",n[1]);

	return 0;
}
