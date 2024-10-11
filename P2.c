#include<stdio.h>
int main(){
	int num[9]={1,2,3,4,5,6,7,8,9};
	int i;
	for(i=8;i>=0;i--)
	{
		printf("num[%d]:%d\n",i,num[i]);
	}
	return 0;
}
