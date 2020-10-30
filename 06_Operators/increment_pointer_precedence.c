// Program 1 
#include<stdio.h> 
int main() 
{ 
  char arr[] = "geeksforgeeks"; 
  char *p = arr; 
  ++*p; 
  printf(" %c\n", *p); 
  
  *p++; 
  printf(" %c\n", *p); 
  
  return 0; 
} 
