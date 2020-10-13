#include <stdio.h> 
  
#define square(x) x*x 				// result 36
// #define square(x) (x*x) 		// result 1, correct!
int main() 
{ 
    // Expanded as 36/6*6 
    int x = 36/square(6);  
    printf("%d\n", x); 
    return 0; 
} 
