#include <stdio.h>

int main() 
{ 
FILE *fp = fopen("test.txt", "r"); 

if ( fp == NULL ) { 
	/* Handle open error */
} 

/* Do some processing with file*/

rewind(fp); /* no way to check if rewind is successful */

/* Do some more precessing with file */


if ( fseek(fp, 0L, SEEK_SET) != 0 ) { 
  /* Handle repositioning error */
} 

return 0; 
} 

