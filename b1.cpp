#include <stdio.h>
#include <math.h>

float i,t;
int n;
int main (){
	printf("nhap n = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		t+=i*i;
	
		}
			printf("tong = %d",t);
	for (i=1;i<=n;i++)
	{
		t+=1/i;
	}
	printf("tong = %f",t);
	return 0;
	}

