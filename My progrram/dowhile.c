#include<stdio.h>
 int main()
{
	int r;
	int j=120;

	printf("enter the number:");
	scanf("%d",&r);
	

	if(r<j)
	{
	    printf("there is the loop");
	}
	else
	{
	 printf("print the number(1 to 120) only :");
	return 0;
	}

	do{
		printf("%d\n",r);
		r++;

	}
	while (r<j);

	return 0;

}	
