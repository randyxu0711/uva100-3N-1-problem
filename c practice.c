#include <stdio.h>

int check(long long int st)
{
	long long int cycle = 1;
	long long int x = st;

	while(x != 1)
	{
		if(x%2 == 0)
			x /= 2;
		else
			x = x * 3 + 1;
		cycle++;
	}
	return cycle;
}

int main()
{
	long long int i,j,temp;
	long long int x = 0;
	long long int n,max;
	while(scanf("%lld %lld",&i,&j) != EOF){
            max = 0;
            printf("%lld %lld ",i,j);
            if(i>j){
                temp = i;
                i = j;
                j = temp;
            }
			for(x=i; x<=j; x++){
				n = check(x);
				max = max > n ? max : n;
			}
            printf("%lld\n",max);
	}

	return 0;
}
