#include"header.h"
void check_toggle(int n,int p)
{
	int checknum;
	checknum=n^(1<<p);
	printf("%d\n",checknum);
}

