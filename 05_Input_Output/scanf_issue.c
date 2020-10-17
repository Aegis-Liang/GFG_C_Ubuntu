// C program to demonstrate the problem when 
// fgets()/gets() is used after scanf() 
#include<stdio.h> 
  
int main() 
{ 
   int x; 
   char str[100]; 
   scanf("%d", &x); 
   fgets(str, 100, stdin); 
   printf("x = %d, str = %s", x, str); 
   return 0; 
} 

// input 10\ntest\n will display 10 only, buffer issue
// 10 gets in x, but the first \n stays in buffer
// The similar problem occurs when scanf() is used in a loop.

/*
// C program to demonstrate the problem when 
// scanf() is used in a loop 
#include<stdio.h> 
  
int main() 
{ 
    char c; 
    printf("......Enter q to quit......\n"); 
    do
    { 
        printf("Enter a character\n"); 
        scanf("%c", &c); 
        printf("%c\n", c); 
    } 
    while (c != 'q'); 
    return 0; 
} 
*/
