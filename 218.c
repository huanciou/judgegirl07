#include <stdio.h>


int C_calculate(long n, long k);


int main()
{	
	long n = 0;
	long m = 0;
	int CNK = 0;
	int sum = 0;

	scanf("%ld %ld", &n, &m); 

	for(long k = 0; k <= m; k++)
	{
		sum = C_calculate(n,k);
		CNK += sum;
	}
	
	printf("%d", CNK);

	return 0;
}

int C_calculate(long n, long k)
{
	int sum = 1;
	long n_ = 1;
	long k_ = 1;
	long n_k_ = 1;
	long n_k = n-k;
	
	if(k==0)
	{
		k_ = 1;
	}
	if(n_k==0)
	{
		n_k = 1;
	}

	for(; n > 0; n--)
	{
		n_ *= n;
	}

	for(; k > 0; k--)
	{
		k_ *= k;
	}
	
	for(; n_k > 0; n_k--)
	{
		n_k_ *= n_k;
	}

	sum = n_ / ( k_ * n_k_ );
	
	return sum;
}
