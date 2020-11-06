// Please make sure that you compile this program 
// using a C compiler, not a C++ compiler (Save your 
// file .cpp). If using online compiler, select "C" 
#include <stdio.h> 

// Structure to represent a 2D point 
struct Point 
{ 
int x, y; 
}; 

// Utility function to print point 
void printPoint(struct Point p) 
{ 
printf("%d, %d", p.x, p.y); 
} 

int main() 
{ 
// Calling printPoint() without creating any temporary 
// Point variable in main() 
printPoint((struct Point){2, 3}); 

/* Without compound literal, above statement would have 
	been written as 
	struct Point temp = {2, 3}; 
	printPoint(temp); */

return 0; 
} 


