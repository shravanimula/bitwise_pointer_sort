#include"header.h"
void check_clr(int n,int p)
{
	int checknum;
	checknum=(n&(~(1<<p)));
	printf("%d\n",checknum);
}

