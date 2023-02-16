#include <stdio.h>

int main()
{
	int n,i;
	float s;
	s = 0;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		s = s+ ( (float)i / (i + 1));
	}
	printf("%.2f", s);
}
