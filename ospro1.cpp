nt main()
{
	int p=5,i,j,c=0,x=0,available=332,flag[10],sequence[10],need[10];
	int allocation[5]={10,200,302,211,002};
	int max[5]={753,322,902,222,433}; 
	for(i=0;i<p;i++)
	{
	for(i=0;i<p;i++)
	{
    	need[i]=max[i]-allocation[i];
	}}
	if(flag==0 && need<=available)
        	{
        		available=available+allocation[j];
        		flag[j]=1;
        		printf("\nProcess %d has been allocated resources",j);
        		sequence[c]=j;
        		c++;
        	}
	if(flag==0)
    	{
    		printf("\t\tSYSTEM IS IN UNSAFE STATE\n");
   			x=1;
    		break;
    	}
   }
	if(x==0)
	{	
		printf("\t\tSYSTEM IS IN SAFE STATE\n");
}
