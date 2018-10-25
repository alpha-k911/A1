#include<stdio.h>
#include<string.h>


struct grounds{

	char gName[100];
	char city[50];
	char state[50];
	//char games[10][30];
	char date_time[10];
	//char time[10][5];
	char rate[10];
	char sport[50];
}temp;

int total=8;
int main()
{
	int i;
   	struct grounds G[100];
	struct grounds temp;
    	
	strcpy(G[0].gName,"rajiv");
	strcpy(G[0].city,"jaipur");
	strcpy(G[0].state,"rajasthan");
	strcpy(G[0].sport,"cricket");
	strcpy(G[1].gName,"rajiv");
	strcpy(G[1].city,"jaipur");
	strcpy(G[1].state,"rajasthan");
	strcpy(G[1].sport,"football");
	strcpy(G[2].gName,"sms");
	strcpy(G[2].city,"nagpur");
	strcpy(G[2].state,"maharashtra");
	strcpy(G[2].sport,"cricket");
	strcpy(G[3].gName,"sms");
	strcpy(G[3].city,"nagpur");
	strcpy(G[3].state,"maharashtra");
	strcpy(G[3].sport,"swimming");
	strcpy(G[4].gName,"jntu");
	strcpy(G[4].city,"hyderabad");
	strcpy(G[4].state,"telangana");
	strcpy(G[4].sport,"badminton");
	strcpy(G[5].gName,"kcr");
	strcpy(G[5].city,"hyderabad");
	strcpy(G[5].state,"telangana");
	strcpy(G[5].sport,"cricket");
	strcpy(G[6].gName,"jntu");
	strcpy(G[6].city,"hyderabad");
	strcpy(G[6].state,"telangana");
	strcpy(G[6].sport,"cricket");
	strcpy(G[7].gName,"rajiv");
	strcpy(G[7].city,"indore");
	strcpy(G[7].state,"maharashtra");
	strcpy(G[7].sport,"tennis");	
	for(i=8;i<100;i++)	
	strcpy(G[i].gName,"null");

	initialSort(G,8);
	addSport(G,"rajiv","jaipur","hockey",9);
	
	//getGroundInfo(G,"jaipur");
	
	//deleteSport(G,"sms","nagpur","cricket",8);

	//getFixturesSortedonState(G,"telangana");

	for(i=0;i<total;i++)
	{
		printf("%s,%s,%s,%s\n",G[i].gName,G[i].city,G[i].state,G[i].sport);	
	}
}



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
		total++;
	}
}

void deleteSport(struct grounds G[],char GroundName[],char city[],char sport[],int size)
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
					pos=i;
				}
			}
		}
	}
	if(found==1)
	{
		for(i=pos;i<total-1;i++)
		{
			swap(G,i,i+1);	
		}
		strcpy(G[i].gName,"null");
		strcpy(G[i].city,"null");
		strcpy(G[i].sport,"null");
		total--;
		printf("SUCCESS\n");
	}
	else
	{
		printf("FAILURE\n");
		
	}
}

swap(struct grounds G[],int i,int j)
{
	temp=G[i];
	G[i]=G[j];
	G[j]=temp;
}


/*if(j==G[i].noOfSports&&found==0)
				{
					strcpy(G[i].S[j].name,sport);
					printf("SUCCESS");
					G[i].noOfSports++;
					found=2;
				}
*/




initialSort(struct grounds G[],int n)
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
			else if((strcmp(G[j].gName, G[j + 1].gName)==0)&&(strcmp(G[j].city,G[j+1].city)>0))
			{	
				temp=G[j];
				G[j]=G[j+1];
				G[j+1]=temp;		
			}
		}
	}
}




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


sortSC(struct grounds G[],int n)
{
	int i,j;
	for (i = 1; i < n; i++)
	{
  		for (j = 0; j < n - i; j++)
		{
 			if (strcmp(G[j].state, G[j + 1].state) > 0)
			{
 				temp = G[j];
 				G[j] = G[j + 1];
 				G[j + 1] = temp;
 			}
			else if((strcmp(G[j].state, G[j + 1].state)==0)&&(strcmp(G[j].city,G[j+1].city)>0))
			{	
				temp=G[j];
				G[j]=G[j+1];
				G[j+1]=temp;		
			}
		}
	}
	for(i=0;i<total;i++)
	{
		printf("%s,%s,%s,%s\n",G[i].gName,G[i].city,G[i].state,G[i].sport);	
	}
}

sortCGS(struct grounds G[],int n)
{
	int i,j;
	for (i = 1; i < n; i++)
	{
  		for (j = 0; j < n - i; j++)
		{
 			if (strcmp(G[j].city, G[j + 1].city) > 0)
			{
 				temp = G[j];
 				G[j] = G[j + 1];
 				G[j + 1] = temp;
 			}
			else if((strcmp(G[j].city, G[j + 1].city)==0)&&(strcmp(G[j].gName,G[j+1].gName)>0))
			{	
				temp=G[j];
				G[j]=G[j+1];
				G[j+1]=temp;		
			}
			else if((strcmp(G[j].city, G[j + 1].city)==0)&&(strcmp(G[j].gName,G[j+1].gName)==0)&&(strcmp(G[j].sport,G[j+1].sport)>0))
			{	
				temp=G[j];
				G[j]=G[j+1];
				G[j+1]=temp;		
			}
		}
	}
}



getGroundInfo(struct grounds G[],char city[])
{
		
	sort(G,total);
	for(int i=0;i<total;i++)
	{
		if(strcmp(G[i].city,city)==0)
		{
			printf("%s\n",G[i].gName);
		}
	}
}


getFixturesinState(struct grounds G[],char state[])
{
		
	sortCGS(G,total);
	for(int i=0;i<total;i++)
	{
		if(strcmp(G[i].state,state)==0)
		{
			printf("%s\n",G[i].sport);
		}
	}
}


getFixturesSortedonState(struct grounds G[])
{
		
	//sortSC(G,total);
	int i,j,n;
	n=total;
	for (i = 1; i < n; i++)
	{
  		for (j = 0; j < n - i; j++)
		{
 			if (strcmp(G[j].state, G[j + 1].state) > 0)
			{
 				temp = G[j];
 				G[j] = G[j + 1];
 				G[j + 1] = temp;
 			}
			else if((strcmp(G[j].state, G[j + 1].state)==0)&&(strcmp(G[j].city,G[j+1].city)>0))
			{	
				temp=G[j];
				G[j]=G[j+1];
				G[j+1]=temp;		
			}
		}
	}
	for(i=0;i<total;i++)
	{
		printf("%s,%s,%s,%s\n",G[i].gName,G[i].city,G[i].state,G[i].sport);	
	}
	
}

/* groundRecord to be added */

void addGround(struct grounds G[],char GroundName[],char state[],char city[],char sport[],int size)
{
	int found=0,i,j,pos;
	for(i=0;i<size&&found==0;i++)
	{
		if(strcmp(G[i].state,state)==0)
		{
			if(strcmp(G[i].city,city)==0)
			{
				if(strcmp(G[i].sport,sport)==0)
				{
					if(strcmp(G[i].gName,GroundName)==0)
					{
						found=1;
					}
					
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
		strcpy(G[pos].state,state);

		printf("SUCCESS\n");
		total++;
	}
}


void deleteGround(struct grounds G[],char GroundName[],char city[],int size)
{
	int found=0,i,j,pos;
	for(i=0;i<size&&found==0;i++)
	{
		if(strcmp(G[i].gName,GroundName)==0)
		{
			if(strcmp(G[i].city,city)==0)
			{
				found=1;
				pos=i;
			}
		}
	}
	if(found==1)
	{
		for(i=pos;i<total-1;i++)
		{
			swap(G,i,i+1);	
		}
		strcpy(G[i].gName,"null");
		strcpy(G[i].city,"null");
		total--;
		printf("SUCCESS\n");
	}
	else
	{
		printf("FAILURE\n");
		
	}
}



/*UniqueSports()
{
	int i,j;
	for (i = 1; i < n; i++)
	{
  		for (j = 0; j < n - i; j++)
		{
 			if (strcmp(G[j].city, G[j + 1].city) > 0)
			{
 				temp = G[j];
 				G[j] = G[j + 1];
 				G[j + 1] = temp;
 			}
			else if((strcmp(G[j].city, G[j + 1].city)==0)&&(strcmp(G[j].sport,G[j+1].sport)>0))
			{	
				temp=G[j];
				G[j]=G[j+1];
				G[j+1]=temp;		
			}
		}
	}
	strcpy(tempStr,G[0].sport);
	for (i = 1; i < n; i++)
	{
		if((strcmp(G[i].city,G[i-1].city)==0)&&)
		{
			
		}
}

*/





















































/*
for (i = 1; i < n; i++)
  for (j = 0; j < n - i; j++) {
 if (strcmp(player[j].tname, player[j + 1].tname) > 0) {
 temp = player[j];
 player[j] = player[j + 1];
 player[j + 1] = temp;
 }
  }
*/


/*
else if((strcmp(G[j-1].gName,G[j].gName)==0)&&(strcmp(G[j-1].sport,G[j].sport)>0))
			{	
				temp=G[j];
				G[j]=G[j-1];
				G[j-1]=temp;		
			}*/

















