#include<stdio.h>
#include<strings.h>
	int main()
{
    char a[5][30],temp[30];
    int i,j;
    printf("enter your word: ");
     gets(a[i]);
    
    for(i=0;i<5;i++)
    {
     for(j=i+1;j<5;j++)
        {
            if(strcmp(a[i],a[j])>0)
            {
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],a[i]);
            }
        }   
    }
    for(i=0;i<5;i++)
    {
        printf("%s\n",a[i]);   
    }
    return 0;
}

