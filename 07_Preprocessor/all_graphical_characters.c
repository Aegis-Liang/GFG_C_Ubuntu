// code to print all Graphical Characters 
#include <stdio.h> 
#include <ctype.h> 

int main() 
{ 
	int i; 
	printf("In C programming All graphic "
			"characters are: \n"); 

	for (i = 0; i <= 127; ++i) 
		if (isgraph(i) != 0) 
			printf("%c ", i);	 

	return 0; 
} 

