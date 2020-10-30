#include <stdio.h> 
#define getName(var) #var 

int main() 
{ 
	int myVar = 0; 
	printf("%s is %d", getName(myVar), myVar); 
	return 0; 
} 

