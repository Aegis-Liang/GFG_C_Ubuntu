#include <stdbool.h>
#include <stdio.h>
typedef enum { F, T } boolean;
int main()
{
    // C99 standard way
		bool arr[2] = { true, false };
		printf("bool values: %d %d\n", arr[0], arr[1]);
    return 0;
    
    // typedef enum way
    boolean my_booli1, my_booli2;
    my_booli1 = F;
    if (my_booli1 == F) {
        printf("my_booli1 is false\n");
    }
    else {
        printf("my_booli1 is true\n");
    }
    my_booli2 = 2;
    if (my_booli2 == F) {
        printf("my_booli2 is false\n");
    }
    else {
        printf("my_booli2 is true\n");
    }
}
