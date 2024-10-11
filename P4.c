#include<stdio.h>
int main(){
	int N[5]={2,3,1,2,3};
	int i;
	
	for(i=1;i<5;i++)
	{
		if(N[0]==N[i])
		{
			printf("%d and ",N[0]);
		}
		
	}
	for(i=2;i<5;i++)
	{
		if(N[1]==N[i])
		{
			printf("%d is occur more than ones.",N[1]);
		}
	}
	return 0;
}
