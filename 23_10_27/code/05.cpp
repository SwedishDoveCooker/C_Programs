#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//int Isprime(int x);
int Isprime(int x){
	int x1=sqrt(x);
	for (int i=2;i<=x1;i++)
	{
		if (x%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	if (m>n){
	int b;m=b;m=n;n=b;
	}
	while (m<=n){
	if (Isprime(m))
	{
		printf("%d\n",m);
	}m++;}
	system("pause");
	return 0;
}