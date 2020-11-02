#include <stdio.h> 

int main() 
{ 
	int arr[5], i; 
	arr[0] = 5; 
	arr[2] = -10; 
	arr[3 / 2] = 2; // this is same as arr[1] = 2 
	arr[3] = arr[0]; 

	printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]); 
	
	for (i = 0; i < 5; i++) 
        // The use of '&' before a variable name, yields 
        // address of variable. 
        printf("Address arr[%d] is %p\n", i, &arr[i]);

	return 0; 
} 

