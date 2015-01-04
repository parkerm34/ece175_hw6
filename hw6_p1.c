/* 	Author: Parker Mathewson
 *	Date: 3/4/12
 *	Comments: Program to convert binary to decimal. This will be done using arrays.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>

int binary_to_decimal(char *binary)
{
	int decimal=0, i=0, division=0, digit=0, len=0;

	len = strlen(binary)-1;
	for(i=0;i<=len;i++)
	{
		digit = (binary[len - i]-'0');
		if(digit>1 || digit<0)
		{
			printf("This number is not a binary number. Try again.\n");
			return(0);
		}
		else
			decimal=decimal + (digit*pow(2,i));
	}

	return decimal;
}

int main(void)
{
	char binary[32];
	int decimal=0;
	char quit;

	printf("Enter the binary number you want to convert: ");
	scanf("%s",&binary);
	fflush(stdin);
	decimal = binary_to_decimal(binary);
	printf("Your number is %d in decimal.\n",decimal);

	while(quit != 'q' || quit !='Q')
	{
		printf("Enter Q or q to quit or any other character to enter another number: ");
		scanf("%s",&quit);
		fflush(stdin);
		if(quit == 'Q' || quit == 'q')
			return(0);
		else
		{
			printf("Enter the binary number you want to convert: ");
			scanf("%s",&binary);
			fflush(stdin);
			decimal = binary_to_decimal(binary);
			printf("Your number is %d in decimal.\n",decimal);
		}
	}
	return(0);
}
