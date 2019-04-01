#include<stdio.h>
int main()
{
	int p=5,i,j,c=0,x=0,available=332,flag[10],sequence[10],need[10];
	int allocation[5]={10,200,302,211,002};
	int max[5]={753,322,902,222,433}; 
	for(i=0;i<p;i++)
	{
    	flag[i]=0;
	}
	for(i=0;i<p;i++)
	{
    	need[i]=max[i]-allocation[i];
    
	}
	printf("Number of processes are 5.\nAvailable resources are 3 3 2.\n");
	for(i=0;i<p;i++)
	{
    	printf("Need of P[%d] is : %d\n",i,need[i]);
	}
	for(i=0;i<p;i++)
	{
    	for(j=0;j<p;j++)
    	{
        	if(flag[j]==0 && need[j]<=available)
        	{
        		available=available+allocation[j];
        		flag[j]=1;
        		printf("\nProcess %d has been allocated resources",j);
        		sequence[c]=j;
        		c++;
        	}
    	}
	}
	for(i=0;i<p;i++)
	{
    	if(flag[i]==0)
    	{
    		printf("\n\t------\n");
    		printf("\t\tSYSTEM IS IN UNSAFE STATE\n");
    		printf("\t------\n");
   			x=1;
    		break;
    	}
   }
	if(x==0)
	{
		printf("\n\------\n");
		printf("\t\tSYSTEM IS IN SAFE STATE\n");
		printf("\t------\n");
		printf("Safe sequence is : ");
		for(i=0;i<p;i++)
		{
    		printf("P[%d]  ",sequence[i]);
		}
	}	
}


		



		
