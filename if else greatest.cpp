#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter number");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
		printf("%d is greatest",a);
	else
		{
			if(b>c)
				printf("%d is greatest",b);
			else
				printf("%d is greatest",c);
		}
	 }
	
	
