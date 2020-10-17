#include <stdio.h>

int main() 
{ 
    char st[] = "CODING"; 
  
    printf("While printing "); 
    printf(", the value returned by printf() is : %d\n", 
                                    printf("%s", st)); 
                                    
    long int n = 123456789; 
  
    printf("While printing "); 
    printf(", the value returned by printf() is : %d\n",  
                                    printf("%ld", n));
  
    return 0; 
} 
