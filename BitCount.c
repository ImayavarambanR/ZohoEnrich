#include<stdio.h>
int main(){
	int n,ans=0, x;
	scanf("%d",&n);
	x = n;
	do{
		ans++;
	}while((x/=2)>0);
	ans = (n == 0) ? 1 : ans;
	printf("%d",ans);
	return 0;
}
