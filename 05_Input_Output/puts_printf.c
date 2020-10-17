// C program to show the use of puts
#include <stdio.h>
int main()
{
		puts("================ Part 1 ================");
    puts("Geeksfor");
    puts("Geeks");
 
    getchar();
    
    
    puts("================ Part 2 ================");
    fputs("Geeksfor", stdout);
    fputs("Geeks", stdout);
 
    getchar();
    
    
    puts("================ Part 3 ================");
    // % is intentionally put here to show side effects of
    // using printf(str)
    // printf("Geek%sforGeek%s");
    getchar();
    
    
    puts("================ Part 4 ================");
    puts("Geek%sforGeek%s");
    getchar();
    
    return 0;
}
