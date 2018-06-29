/*
*
*
*
*/
#include <stdio.h>
#include <float.h>
#include "b.h"


double factorial(unsigned int n)
{
	double ret=1.0f;
	printf("At beginning ret is: %d\n",ret);
	while(n>1)
	{
		ret*=n--;
	}
	return ret;
}
