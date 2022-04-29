#include"header.h"
int main()
{
	int choice;
	int num,pos;
	int n1,n2;
	printf("enter anumber:");
	scanf("%d",&num);
	printf("enter a position:");
	scanf("%d",&pos);
	while(1)
	{
		printf("enter ur choice\n");
		printf("1.least 2.most 3.get 4.set 5.clear 6.toggle 7.swap 8.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:check_least(num);
			       break;
			case 2:check_most(num);
			       break;
			case 3:check_get(num,pos);
			       break;
			case 4:check_set(num,pos);
			       break;
			case 5:check_clr(num,pos);
			       break;
			case 6:check_toggle(num,pos);
			       break;
			case 7:printf("enter two numbers:");
			       scanf("%d%d",&n1,&n2);
			       printf("before swap n1=%d\tn2=%d\n",n1,n2);
			       check_swap(n1,n2);
			       break;
			case 8:exit(0);
		}
	}
}


