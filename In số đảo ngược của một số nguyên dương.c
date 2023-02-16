#include <stdio.h>
#include <math.h>
int main()
{
	int n, m, i,x,count, numDigits,j;
	x = 0;
	count = 0;
	
	scanf("%d", &n);
	j = n;
	//tính số chữ số
	numDigits = -1;
	while (n != 0) //numDigits = 4
	{
		n = n / 10;
		numDigits++;
	} 
	while (j != 0)
	{
		i = j % 10; // i =4 //i=3
		printf("in = %d\n", i); // printf 4 //printf 3
		m = j / 10;		// m=123
		j = m;
		
		count = count + (i * ((float)pow(10,numDigits)));   //count  = 0 + (4*10^0) = 4
		numDigits--; //numDigits = 0+1;

	}
	//printf("%d", numDigits);
	printf("count = %d", count);
}*/
#include <stdio.h>
#include <math.h>
int main()
{
	int n, m, i, count, numDigits, j,count1;
	count = 0;
	count1 = 0;

	scanf("%d", &n);
	j = n;
	//tính số chữ số
	numDigits = 0;
	while (n != 0)  //numdigits = 8
	{
		n = n / 10;
		numDigits++;
	}
	while (j != 0) //j=12345678
	{
		i = j % 10; //i=8
		//printf("in = %d\n", i);
		m = j / 10; //m=1234567
		j = m; // j = 1234567

		count1 = ((float)pow(10, (numDigits-1))*i); // = 0 + (8* 10^7) = 
		count += count1;
		numDigits--;
		//printf("%d = %d * 10 ^ %d", count,i,numDigits);
		//if (numDigits == 0) break;
	}
	printf("%d", count);
}
