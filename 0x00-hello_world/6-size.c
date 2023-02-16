#include <stdio.h>
/**
 * main- prints sizes
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)/n", size(char));
	 printf("Size of an int: %zu byte(s)/n", size(int));
	  printf("Size of a long int: %zu byte(s)/n", size(long int));
	   printf("Size of a long long int: %zu byte(s)/n", size(long long int));
	    printf("Size of a float: %zu byte(s)/n", size(float));
	    return (0);
}
