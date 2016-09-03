/* Header files */
#include <stdio.h>
#include "functions.h"

/* Main function */
int main() 
{
	int user_define_size = 0, result = 0, i = 0;
	int* add = NULL;

	/* Get array size from the user */
	printf("Please enter size of an array: ");
	scanf(" %d", &user_define_size);
	printf("##################################\n");
	printf("**********************************\n");

	/* Ask for array of size user_define_size */ 
	add = get_array(user_define_size);

	/* Take input for those elements */
	for (i = 0; i < user_define_size; i++) {
		printf("Enter value for element %d: ", (i+1));
		scanf("%d", (add+i));
	}

	/* Some of the elements of array */
	result = sum_of_element(add, user_define_size);

	printf("##################################\n");
	printf("**********************************\n");
	printf("sum of %d elements : %d\n", user_define_size, result);
	
	return 0;
}
