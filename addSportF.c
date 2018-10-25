void addSport(struct grounds G[],char GroundName[],char city[],char sport[],int size)
{
	int found=0,i,j,pos;
	for(i=0;i<size&&found==0;i++)
	{
		if(strcmp(G[i].gName,GroundName)==0)
		{
			if(strcmp(G[i].city,city)==0)
			{
				if(strcmp(G[i].sport,sport)==0)
				{
					found=1;
				}
			}
		}
		else if(strcmp(G[i].gName,"null")==0)
		{
			found=2;
			pos=i;
		}
	}
	if(found==1)
	{
		printf("FAILURE\n");
	}
	else
	{
		strcpy(G[pos].sport,sport);
		strcpy(G[pos].gName,GroundName);
		strcpy(G[pos].city,city);

		printf("SUCCESS\n");
		limit++;
	}
}
