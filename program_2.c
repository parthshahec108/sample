/* Header files */
#include <stdio.h>
#include "functions.h"

/* We keep array size is equal to 300 by default */
#define ARRAY_SIZE 300

/* Main function */
int main() 
{
	int load_value_from = 0, store_value_to = 0;
	int* add = NULL;

	/* Ask for array of size user_define_size */ 
	add = get_array(ARRAY_SIZE);

	/* Get details from the user */
	printf("Load value from location: ");
	scanf("%d", &load_value_from);
	printf("value at this location (at least 100): ");
	scanf("%d", (add + load_value_from));
	printf("value to be stored at location: ");
	scanf("%d", &store_value_to);

	/* Decrement the value */
	decr((add + load_value_from), 1, 0, (add + store_value_to));

	printf("\nValue at location %d: %d\n", 
		store_value_to, (*(add + store_value_to)));
	return 0;
}
