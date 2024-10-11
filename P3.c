#include<stdio.h>
int main(){
	int	num[10]={4,1,6,8,10,21,8,9,2,6};
	int i;
	int min=num[0];
	int max=num[0];
	for(i=1;i<10;i++){

	
		if(num[i]<min)
		{
			min=num[i];
		}
		if(num[i]>max)
		{
			max=num[i];
		}
		
	}
	printf("Minimum=%d\n",min);
	printf("Maximum=%d",max);
		return 0;
	}
	
