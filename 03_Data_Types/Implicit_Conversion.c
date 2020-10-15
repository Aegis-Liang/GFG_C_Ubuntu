/* bool -> char -> short int -> int -> 
       unsigned int -> long -> unsigned -> 
       long long -> float -> double -> long double
       
It is possible for implicit conversions to lose information, signs can be lost (when signed is implicitly converted to unsigned), and overflow can occur (when long long is implicitly converted to float).
 */
 
 // An example of implicit conversion 
#include<stdio.h> 
int main() 
{ 
    int x = 10;    // integer x 
    char y = 'a';  // character c 
  
    // y implicitly converted to int. ASCII  
    // value of 'a' is 97 
    x = x + y; 
     
    // x is implicitly converted to float 
    float z = x + 1.0; 
  
    printf("x = %d, z = %f\n", x, z); 
    return 0; 
} 
