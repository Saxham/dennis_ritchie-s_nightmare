#include <stdio.h>
int main()
{

	int in[16],con[16],a=0,i;
	printf("enter the binary no\t");
	scanf("%d",&in);
	while(in!=0)
	{
		con[a]=in[a]%2;
		a=a+1;
		in=in/2;
	}
	pirntf("the binary output is \n");
	for(i=a;i>=0;i--)
	{
		printf("%d",con[i]);
	}
return 0;	
}
