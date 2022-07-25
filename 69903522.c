#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,a,b,c[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d%d",&a,&b);
	    if(a>b)
	    c[i]=a-b;
	    else
	    c[i]=b-a;
	}
	for(i=0;i<n;i++)
	printf("%d\n",c[i]);
	return 0;
}

