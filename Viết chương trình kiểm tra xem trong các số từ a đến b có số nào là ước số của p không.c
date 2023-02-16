#include <stdio.h>

int main()
{
	int a,b,i,p,count,m,n;
	count = 0;
	scanf("%d%d%d", &a,&b,&p);
	m = a;
	n=b; 
	for (i =a; i <= b; i++)
	{
		if (p%i == 0)
			count++;
	}
	if (count >= 1)
	{
		printf("Co it nhat 1 so trong doan [%d, %d] la uoc cua %d.",m, n, p);
	}
	else printf("Khong co so nao trong doan [%d, %d] la uoc cua %d.", m, n, p);
}
