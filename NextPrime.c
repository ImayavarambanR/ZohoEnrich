#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	int n,i,x,fl;
	scanf("%d",&n);
	x=n+1;
	while(1)
	{
		if(x%2==0)
		{
			continue;
		}
		fl=0;
		for(i=2;i<=sqrt(x);i++)
		{
			if(x%i==0)
			{
				fl=1;
				break;
			}
		}
		if(fl==0)
		{
			printf("%d",x);
			break;
		}
		x++;
	}
	return 0;
}
