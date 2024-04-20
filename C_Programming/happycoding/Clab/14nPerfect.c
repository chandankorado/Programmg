// ‘n’ perfect number for agiven ‘n’ value?

#include<stdio.h>
#include<math.h>

int isPerfect(long long int n)
{
	long long int dsum = 0;
	long long int i;
	
	for (i = 1; i <= sqrt(n); ++i){
	
		if (n % i == 0){
			if (i == n / i)
				dsum += i;
			else{
				dsum += i;
				dsum += n / i;
			}
		}
	}	
	dsum = dsum - n;
	if (dsum == n) return 1;
	else return 0;
}
int main()
{
	long long int n, i, temp;
	
	printf("Enter n: ");
	scanf("%d", &n);
	i = 1;
	while (n > 0)
	{
		if (isPerfect(i) == 1)
		{
			printf("%d ", i);
			n = n - 1;
		}
		i = i + 1;
	}
	printf("\n");
	return 0;
}
	