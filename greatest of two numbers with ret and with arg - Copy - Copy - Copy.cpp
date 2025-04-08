#include<stdio.h>
int greatest(int a,int b)
{
	return a>b ? a:b;
}
main()
{
	int a=78,b=90;
	printf("%d",greatest(a,b));
}
