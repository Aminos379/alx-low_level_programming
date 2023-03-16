#include <stdio.h>
/**
* main - main menu
* Return: 0 always
*/
int main(void)
{
	printf("size of char %lu bytes", sizeof(char));
	printf("size of int %lu bytes", sizeof(int));
	printf("size of long int %lu bytes", sizeof(long int));
	printf("size of long long int %lu bytes", sizeof(long long int));
	printf("size of float %lu bytes", sizeof(float));
	return (0);
}
