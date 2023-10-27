#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	for (int i=100;i<999;i++)
	{
		//printf("%d\n",int(pow(int(i/100),3.0)+int(pow((int(i/10)-int(i/100)*10),3.0))+int(pow(i-int(i/10)*10,3.0))));
		if (pow(int(i/100),3.0)+pow((int(i/10)-int(i/100)*10),3.0)+pow(i-int(i/10)*10,3.0)==i)
		{
			
			printf("%d\n",i);
	}}
	system("pause");
	return 0;
}