#include <stdio.h>
int main()
{
	int n,x,r=0;
  	printf("Enter a Num : ");
  	scanf("%d",&n);
  	while(n!=0)
  	{
     	  x=n%10;
     	  r=r*10+x;
     	  n/=10;
  	}
  	printf("Reverse : %d",r);
  	return 0;
}
