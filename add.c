#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)	
{
	int sum , i , k;
	i= atoi(argv[1]);
	k= atoi(argv[2]);
	sum=i+k;
	printf("the summary of argument1: %d and argument2: %d is: %d\n", i , k , sum);
	
	
	return 0;


}