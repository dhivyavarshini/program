#include <stdio.h>

int main(void) {
	int N,rem,s,temp;
	scanf("%d",&N);
	temp=N;
	while(N!=0)
	{
		rem=N%10;
		s=s+rem*rem*rem;
		N=N/10;
	}
	if(s==temp)
	{
		printf("yes");
		
	}
	else
	{
		printf("no");
	}
	return 0;
}
