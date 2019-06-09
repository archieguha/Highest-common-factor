#include<stdio.h>
int main()
{
sos:	
	int i,n1,n2,c,g;
	printf("Enter the numbers you want to find HCF of:");
	scanf("%d%d",&n1,&n2);
	if(n1>n2){
		g=n2;	
	}
	else{
		g=n1;
	}
for (i=g;i>=1;i--)
{
	if(n1%i==0 && n2%i==0)
	{
		c=i;
		break;
	}
	}	
	printf("HCF is:%d\n\n",c);
	goto sos;
	return 0;
	
	
}
