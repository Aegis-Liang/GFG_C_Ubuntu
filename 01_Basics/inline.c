#include <stdio.h> 
  
static inline int square(int x) { return x*x; } 
int main() 
{ 
  // square() will be replaced with return x*x like macro did
  // but inline has type check
	int x = 36/square(6); 
	printf("%d\n", x); 
	return 0; 
} 
