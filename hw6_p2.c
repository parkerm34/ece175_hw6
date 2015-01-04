/*	Author: Parker Mathewson
 *	Date: 3/4/12
 *	comments: This server is lagging really bad it is getting annoying.
 *			This program capitalizes every lowercase character.
 *			This does not use arrays.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void lower_to_upper(char *static_lower, char *all_upper)
{
	int len=0, counter=0;

	len=strlen(static_lower);
	for(counter=0; counter<=len; counter++)
	{
		if(*(static_lower + counter) >96 && *(static_lower + counter) <123)
			*(all_upper + counter) = *(static_lower + counter)-32;
		else
			*(all_upper + counter) = *(static_lower + counter);
	}
	printf("%s\n", all_upper);
}

int main(void)
{
	char *static_lower="Hello, World!";
	char *all_upper;
	char return_string;
	int len=0;

	printf("%s\n", static_lower);

	all_upper=(char*)malloc(sizeof(char)*len);
	len = strlen(static_lower);
	all_upper=&return_string;
	lower_to_upper(static_lower, all_upper);

	return(0);
}
