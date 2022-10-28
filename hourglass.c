#include<stdio.h>
void main(){
	int a = 9;
	for (int i = 0; i < a; ++i)
	{
		for (int j = 0; j < a; ++j)
			{
				if (i>j ^ i+j>=a)
				{
					printf(" * ");
				}
				else{
				printf("   ");
			}
		}
		printf("\n");
	}
}