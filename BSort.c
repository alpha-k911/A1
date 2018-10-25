sort(struct grounds G[],int n)
{
	int i,j;
	for (i = 1; i < n; i++)
	{
  		for (j = 0; j < n - i; j++)
		{
 			if (strcmp(G[j].gName, G[j + 1].gName) > 0)
			{
 				temp = G[j];
 				G[j] = G[j + 1];
 				G[j + 1] = temp;
 			}
			else if((strcmp(G[j].gName, G[j + 1].gName)==0)&&(strcmp(G[j].sport,G[j+1].sport)>0))
			{	
				temp=G[j];
				G[j]=G[j+1];
				G[j+1]=temp;		
			}
		}
	}
}

