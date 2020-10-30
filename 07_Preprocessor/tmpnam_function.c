// C program to generate random temporary file names. 
#include <stdio.h> 
int main(void) 
{ 
	// L_tmpnam declared in the stdio.h file. 
	// L_tmpnam define length of the generated file name. 
	char generate[L_tmpnam + 1]; // Add +1 for the null character. 
	tmpnam(generate); 
	puts(generate); 
	return 0; 
} 

