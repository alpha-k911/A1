void addSport(struct grounds G[],char GroundName[],char city[],char sport[],int size)
{
	int found=0,i,j;
	for(i=0;i<size&&found==0;i++)
	{
		if(strcmp(G[i].gName,GroundName)==0)
		{
			if(strcmp(G[i].city,city)==0)
			{
				for(j=0;j<G[i].noOfSports;j++)
				{
					if(strcmp(G[i].S[j].name,sport)==0)
					{
						found=1;
					}
				}
				if(j==G[i].noOfSports&&found==0)
				{
					strcpy(G[i].S[j].name,sport);
					printf("SUCCESS");
					G[i].noOfSports++;
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

