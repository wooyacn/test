#include <stdio.h>
#include <float.h>
#include "b.h"

int main(int argc, char** argv)
{
	puts("\nCharacteristics of the type float\n");
	printf("Storage size is %d bytes\n"
		"Smallest positive value: %E\n"
		"Greagest positive value: %E\n"
		"Precision %d decimal digits\n",
		sizeof(float),FLT_MIN,FLT_MAX,FLT_DIG
	);
	
	unsigned short *biosPrt=(unsigned short*)0x400000L; 
	unsigned short com1_io=*biosPrt;
	printf("bisoPrt:%08x\n",com1_io);
	
	double i=9.0f;
	double *p=&i;
	printf("Address: %p, Value: %f\n",p,i);


	printf("Factorial 100: %E\n",factorial(170));
	return 0;
}


