#include"header.h"
void check_most(int n)
{
	int bit=8;
	bit=bit-1;
	if(n &(1<<bit))
	{
		printf("msb is set\n");
	}
	else
	{
		printf("msb is clr\n");
	}
}
