#include <iostream>
using namespace std;
#include <stdio.h>
#include<algorithm>
int main(void)
{
int t,n;
scanf("%d",&t);
while(t--)
{
	scanf("%d",&n);
	int i,arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int diff[n-1];
	sort(arr,arr+n);
	for(i=1;i<n;i++)
	{
		diff[i-1]=arr[i]-arr[i-1];
	}
	sort(diff,diff+n-1);
	printf("%d\n",diff[0]);
}



	return 0;
}
