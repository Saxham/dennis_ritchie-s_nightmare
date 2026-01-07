#include<stdio.h>
float si(int p,int t,int r)
{
	printf("enter p,t,r:\n");
	scanf("%d%d%d",&p,&t,&r);
	float i=((p*t*r)/100);
	return i;
}
int main()
{
	int p,t,r;
	float s;
	s=si(p,t,r);
	printf("the si is %f: ",s);
 return 0;
}

