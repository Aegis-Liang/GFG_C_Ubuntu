#include<stdio.h> 
int main() 
{ 
    float x = 0.1; 
    if (x == 0.1) 
        printf("IF");				// print "IF" if changes x = 0.5 
    else if (x == 0.1f) 
        printf("ELSE IF"); 
    else
        printf("ELSE"); 
        
    printf("\n%lu %lu %lu\n", sizeof(x), sizeof(0.1), sizeof(0.1f)); 
    return 0; 
} 
