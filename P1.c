//2. Find largest number in an aaray
#include <stdio.h>
#include <math.h>
int main()
{
  int l, i, a[10];  //

  for (i=0; i<10; i++)    //entered number not more than 10
  {
    printf(" ");
    scanf("%d",&a[i]);  //print user entered number
  }

  for(i=0; i<10; i++)
  {
    if(l<a[i])  //compare every element in array to next one
    {
      l=a[i];   //store large number in l
    }
  }
  printf("\n%d\n",l); //print large number
  return 0;
}
