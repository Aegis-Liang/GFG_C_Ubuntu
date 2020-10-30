// C code to illustrate 
// the use of ceil function. 
#include <stdio.h> 
#include <math.h> 

#define PI 3.14159265 

int main () 
{ 

 printf("%.5f\n", sqrtf(3.6)); 

float val1, val2, val3, val4; 

val1 = 1.6; 
val2 = 1.2; 
val3 = -2.8; 
val4 = -2.3; 

printf ("value1 = %.1lf\n", ceil(val1)); 
printf ("value2 = %.1lf\n", ceil(val2)); 
printf ("value3 = %.1lf\n", ceil(val3)); 
printf ("value4 = %.1lf\n", ceil(val4)); 

printf("Value1 = %.1lf\n", floor(val1)); 
printf("Value2 = %.1lf\n", floor(val2)); 
printf("Value3 = %.1lf\n", floor(val3)); 
printf("Value4 = %.1lf\n", floor(val4));
	
	
int a, b; 
   a = 1234; 
   b = -344; 
    
   printf("The absolute value of %d is %lf\n", a, fabs(a)); 
   printf("The absolute value of %d is %lf\n", b, fabs(b)); 
   
   
 double x, ret; 
   x = 2.7; 
  
   // finding log(2.7) 
   ret = log(x); 
   printf("log(%lf) = %lf", x, ret); 
   
   
   x = 10000; 
    
   // finding value of log1010000 
   ret = log10(x); 
   printf("log10(%lf) = %lf\n", x, ret); 
   
   
   float a1, b1; 
   int c1; 
   a1 = 8.2; 
   b1 = 5.7; 
   c1 = 3; 
   printf("Remainder of %f / %d is %lf\n", a1, c1, fmod(a1, c1)); 
   printf("Remainder of %f / %f is %lf\n", a1, b1, fmod(a1, b1));
   
   printf("Square root of %lf is %lf\n", 225.0, sqrt(225.0) ); 
   printf("Square root of %lf is %lf\n", 300.0, sqrt(300.0) ); 
   
   printf("Value 8.0 ^ 3 = %lf\n", pow(8.0, 3));  
   printf("Value 3.05 ^ 1.98 = %lf", pow(3.05, 1.98));
   
   
   double x2, fractpart2, intpart2; 
  
   x2 = 8.123456; 
   fractpart2 = modf(x2, &intpart2); 
  
   printf("Integral part = %lf\n", intpart2); 
   printf("Fraction Part = %lf \n", fractpart2);
   
   
   double x3 = 0; 
    
   printf("The exponential value of %lf is %lf\n", x3, exp(x3)); 
   printf("The exponential value of %lf is %lf\n", x3+1, exp(x3+1)); 
   printf("The exponential value of %lf is %lf\n", x3+2, exp(x3+2)); 
   
   
   double x4, ret4, val; 
   x4 = 60.0; 
   val = PI / 180.0; 
   ret4 = cos( x4*val ); 
   printf("The cosine of %lf is %lf degrees\n", x4, ret4); 
     
   x4 = 90.0; 
   val = PI / 180.0; 
   ret4 = cos( x4*val ); 
   printf("The cosine of %lf is %lf degrees\n", x4, ret4);
   
   
   double x5, ret5, val5; 
  
   x5 = 0.9; 
   val5 = 180.0 / PI; 
  
   ret5 = acos(x) * val5; 
   printf("The arc cosine of %lf is %lf degrees", x5, ret5); 
  
  
   double x6, ret6; 
   x6 = 0.5; 
  
   ret6 = tanh(x6); 
   printf("The hyperbolic tangent of %lf is %lf degrees", x6, ret6); 
     
   
return(0); 

} 

