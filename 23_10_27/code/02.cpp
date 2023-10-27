#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int a,i=1,c;int j[5]={-1};
	//printf("%d",j[4]);
	scanf("%d",&a);
	while (a/10>=1){
		c=a-a/10*10;printf("%d",c);j[i-1]=c;a/=10;i++;
	} 
	printf("%d\n\n",a);printf("%d\n\n",i);j[i-1]=a;
	while (i>0){
		i--;printf("%d\n",j[i]);
	}
	system("pause");
	return 0;
}