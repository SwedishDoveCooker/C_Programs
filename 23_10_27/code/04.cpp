#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	while(1){
	int a,i=1,c,d=0,b;
	scanf("%d",&a);b=a;
	while (a/10>=1){
		c=a-a/10*10;d=d*10+c;a/=10;i++;
	} 
	d=d*10+a;
	if (b==d){printf("Yes\n");
	}
	else{
		printf("No\n");
	}}
	system("pause");
	return 0;
}