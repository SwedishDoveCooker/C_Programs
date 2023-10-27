#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	float x,a=1.0,b=1.0;int n,i;
	scanf("%f",&x);scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		//printf("%d",i);
		a*=(-x)/(i*1.0);
		//printf("%f",a);
		b+=a;
	}
	printf("%f",b);
	system("pause");
	return 0;
}