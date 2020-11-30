#include <stdio.h>
#include <string.h>

int main (void)
{
	char string_orig[15]="pedro";
	char string_dest[15]="joão";
	
	strcpy(string_orig, string_dest);
	printf("Nome: %s \n", string_orig);
	return 0;

}