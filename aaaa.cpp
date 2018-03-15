#include<stdio.h>
#include<stdlib.h>

int interativa(int num, int num2)
{
	int n,i;
	for(i=1;i<=num;i--)
	{
		n += num2;
	}
	return n;
}
int recursiva(int num, int num2)
{
	if(num == 1){
		return (num2);
		}
		else{
		
		return (num2 + recursiva(num2, num-1));
		}
	}
int main (){
	int num2,num,inter,rec;
	printf("Entre com um numero: ");
	scanf("%d",&num);
	printf("Entre com um numero: ");
	scanf("%d",&num2);
	inter = interativa(num,num2);
	rec = recursiva(num,num2);
	printf("O resultado e: %d",inter);
	printf("O resultado e: %d",rec);
	return 0;
	
	
}
