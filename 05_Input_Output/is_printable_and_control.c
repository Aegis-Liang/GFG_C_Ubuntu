// C program to illustrate isprint() and iscntrl() functions. 
#include <stdio.h> 
#include <ctype.h> 
int main(void) 
{ 
    char ch = 'a'; 
    if (isprint(ch)) { 
        printf("%c is printable character\n", ch); 
    } else { 
        printf("%c is not printable character\n", ch); 
    } 
  
    if (iscntrl(ch)) { 
        printf("%c is control character\n", ch); 
    } else { 
        printf("%c is not control character", ch); 
    } 
    return (0); 
} 
