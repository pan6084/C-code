/*Input a 4-digit integer through keyboard, print the sum of product of even position digits and odd position digits.*/

#include <stdio.h>
#include <math.h>

int main() 
{
    int num, thousands, hundreds, tens, ones, ans;
    printf("Enter a 4 digit integer: ");
    scanf("%d", &num);
    if(num>0 && num/1000>=1)		//check no. is greater than zero 
    {
        thousands = num/1000;		//for first digit position
        hundreds = (num-(1000*thousands))/100;		//for second digit position
        tens = (num-(1000*thousands)-(100*hundreds))/10;	//for third digit position
        ones = (num-(1000*thousands)-(100*hundreds)-(10*tens));		//for forth digit position
        ans=(thousands*tens)+(hundreds*ones);		//sum and product of odd, even
    }
    printf("\nSum of product of even and odd Digits = %d\n", ans);
    
    return 0;
}
