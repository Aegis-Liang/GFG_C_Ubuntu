// C program to illustrate 
// char const *p 
#include<stdio.h> 
#include<stdlib.h> 

int main() 
{ 
	char a ='A', b ='B'; 
	const char *ptr = &a; 
	
	//*ptr = b; illegal statement (assignment of read-only location *ptr) 
	
	// ptr can be changed 
	printf( "value pointed to by ptr: %c\n", *ptr); 
	ptr = &b; 
	printf( "value pointed to by ptr: %c\n", *ptr); 
	
	
	
	char *const ptr2 = &a; 
  printf( "Value pointed to by ptr2: %c\n", *ptr2); 
  printf( "Address ptr2 is pointing to: %p\n\n", ptr2); 
  
  //ptr2 = &b; illegal statement (assignment of read-only variable ptr) 
  
  // changing the value at the address ptr is pointing to 
  *ptr2 = b;  
  printf( "Value pointed to by ptr2: %c\n", *ptr2); 
  printf( "Address ptr2 is pointing to: %p\n", ptr2);
  
  
  
  const char *const ptr3 = &a; 
      
  printf( "Value pointed to by ptr3: %c\n", *ptr3); 
  printf( "Address ptr3 is pointing to: %p\n\n", ptr3); 
  
  // ptr3 = &b; illegal statement (assignment of read-only variable ptr3) 
  // *ptr3 = b; illegal statement (assignment of read-only location *ptr3) 
  
} 


