#include <stdio.h>
#include<math.h>
int main(){
	int i,n;
	scanf("%d",&n);
	int a[1000];
	for(i=0;i<n;i++ )
	scanf("%d",&a[i]);
	int m=abs(a[1]-a[0]);
	for (i=1;i<n-1;i++)
	if(abs(a[i+1]-a[i])>m)
	m=abs(a[i+1]-a[i]);
printf("%d",m);
return 0;	
}
