// C program to illustrate macro function. 
#include <stdio.h> 
#define geeks(T) _Generic( (T), char: 1, int: 2, long: 3, default: 0) 
int main(void) 
{ 
	// char returns ASCII value which is int type. 
	printf("%d\n", geeks('A')); 

	// Here A is a string. 
	printf("%d",geeks("A")); 
	
	return 0; 
} 

