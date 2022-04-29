#include"header.h"
void check_get(int n,int p)
{
	int checknum;
	checknum=((n>>p)&1);
	printf("%d\n",checknum);
}

