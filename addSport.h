addSport(struct grounds G[],GroundName,city,sport,size)
{
	
	
	for(i=0;i<size&&found==0;i++)
	{
		if(strcmp(G[i].gName,GroundName)==0)
		{
			if(strcmp(G[i].city,city)==0)
			{
				c=0;
				for(j=0;j<G[i].noOfSports;j++)
				{
					if(strcmp(G[i].games[j],sport)==0)
					{
						found=1;
					}
				}
				if(j==G[i].noOfSports&&found==0)
				{
					strcpy(G[i].games[j+1],sport);
					printf("SUCCESS");
					found=2;
				}
			}
		}
	}
	if(found==1)
	{
		printf("FAILURE");
	}
}
