# include <stdio.h> 
# include <string.h> 
 
struct test 
{ 
char str[20]; 
}; 

struct test2 
{ 
  char *str; 
}; 

int main() 
{ 
struct test st1, st2; 

strcpy(st1.str, "GeeksforGeeks"); 

st2 = st1; 

st1.str[0] = 'X'; 
st1.str[1] = 'Y'; 

/* Since copy was Deep, both arrays are different */
printf("array member deeply copied:\n");
printf("st1's str = %s\n", st1.str); 
printf("st2's str = %s\n\n", st2.str); 



return 0; 
} 

