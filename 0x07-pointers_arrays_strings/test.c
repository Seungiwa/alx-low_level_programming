#include<stdio.h>

int main(void)
{
	int var = 123;
	int *ptr1;
	int **ptr2;

	//Assigning the address of variable to ptr1
	ptr1 = &var;

	//assigning the address of ptr1 to ptr2
	ptr2 = &ptr1;

	/* finding value of var */
	printf("Value of var is: %d\n", var);
	printf("Value of var through pointer 1: %d\n", *ptr1);
	printf("value of var through pointer 2: %d\n", **ptr2);


	/* Finding the address of var */
	printf("\n---------------------------\n");
	printf("Address of var is: %p\n", &var);
	printf("Address of var through pointer 1: %p\n", ptr1);
	printf("Address of var through pointer 2: %p\n", *ptr2);

	
	/* Value of pointer1 */
	printf("\n---------------------------------\n");
	printf("Value of pointer 1:%d\n", ptr1);
	printf("Value of pointer 1 using pointer 2: %d\n", *ptr2);

	/* Address of pointer 1 */
	printf("\n---------------------------\n");
	printf("Address of pointer 1 is: %p\n", &ptr1);
	printf("Address of pointer 1 using pointer 2 is %p\n", ptr2);

	/* Values and address of pointer2 */
	printf("\n--------------------------------\n");
	printf("Values of pointer2 is: %d\n", ptr2);
	printf("Address of pointer2 is %p\n", &ptr2);
	return 0;
}
	
