#include<stdio.h>
#include<string.h>

//testing





struct time
{
	int h,m;
};

struct date
{
	int d,m,y;
	struct time time[2];
}tempD,tDate[10],tempDate[10];

struct sports
{
	char name[50];
	struct date dt[10];
	struct date s_d[1];
	int rate;
	struct time time[2];
	int noDates_aval;
}tempS;

struct grounds{

	char gName[100];
	char city[50];
	char state[50];
	struct sports S[10];
	int noOfSports;
	//char games[10][30];
	//char date_time[10];
	//char time[10][5];
	//struct date D[1];
	//char rate[10];
	//char sport[50];
}temp,G[100],req[100];


int total=6,size=100,c=0;
int main()
{
	int i,j;
	char city[10],sport[50];
	strcpy(G[0].gName,"rajiv");
	strcpy(G[0].city,"jaipur");
	strcpy(G[0].state,"rajasthan");
	strcpy(G[0].S[0].name,"cricket");
	strcpy(G[0].S[1].name,"football");
	strcpy(G[0].S[2].name,"hockey");
	G[0].noOfSports=3;
	G[0].S[0].dt[0].d=22;
	G[0].S[0].dt[0].m=10;
	G[0].S[0].dt[0].y=2018;
	G[0].S[0].dt[0].time[0].h=11;
	G[0].S[0].dt[0].time[0].m=00;
	G[0].S[0].dt[0].time[1].h=16;
	G[0].S[0].dt[0].time[1].m=00;


	G[0].S[0].dt[1].d=23;
	G[0].S[0].dt[1].m=10;
	G[0].S[0].dt[1].y=2018;
	G[0].S[0].dt[1].time[0].h=10;
	G[0].S[0].dt[1].time[0].m=00;
	G[0].S[0].dt[1].time[1].h=12;
	G[0].S[0].dt[1].time[1].m=00;


	G[0].S[0].dt[2].d=27;
	G[0].S[0].dt[2].m=10;
	G[0].S[0].dt[2].y=2018;
	G[0].S[0].dt[2].time[0].h=10;
	G[0].S[0].dt[2].time[0].m=00;
	G[0].S[0].dt[2].time[1].h=11;
	G[0].S[0].dt[2].time[1].m=00;
	G[0].S[0].noDates_aval=3;

	G[0].S[1].dt[0].d=22;
	G[0].S[1].dt[0].m=10;
	G[0].S[1].dt[0].y=2018;
	G[0].S[1].dt[0].time[0].h=14;
	G[0].S[1].dt[0].time[0].m=00;
	G[0].S[1].dt[0].time[1].h=16;
	G[0].S[1].dt[0].time[1].m=00;


	G[0].S[1].dt[1].d=24;
	G[0].S[1].dt[1].m=10;
	G[0].S[1].dt[1].y=2018;
	G[0].S[1].dt[1].time[0].h=15;
	G[0].S[1].dt[1].time[0].m=00;
	G[0].S[1].dt[1].time[1].h=18;
	G[0].S[1].dt[1].time[1].m=00;
	G[0].S[1].noDates_aval=2;

	G[0].S[2].dt[0].d=28;
	G[0].S[2].dt[0].m=10;
	G[0].S[2].dt[0].y=2018;
	G[0].S[2].dt[0].time[0].h=13;
	G[0].S[2].dt[0].time[0].m=00;
	G[0].S[2].dt[0].time[1].h=16;
	G[0].S[2].dt[0].time[1].m=00;


	G[0].S[2].dt[1].d=29;
	G[0].S[2].dt[1].m=11;
	G[0].S[2].dt[1].y=2018;
	G[0].S[2].dt[1].time[0].h=18;
	G[0].S[2].dt[1].time[0].m=00;
	G[0].S[2].dt[1].time[1].h=20;
	G[0].S[2].dt[1].time[1].m=00;
	G[0].S[2].noDates_aval=2;


	G[0].S[0].s_d[0].d=22;
	G[0].S[0].s_d[0].m=10;
	G[0].S[0].s_d[0].y=2018;
	G[0].S[1].s_d[0].d=29;
	G[0].S[1].s_d[0].m=10;
	G[0].S[1].s_d[0].y=2018;
	G[0].S[2].s_d[0].d=26;
	G[0].S[2].s_d[0].m=10;
	G[0].S[2].s_d[0].y=2018;




	G[0].S[0].rate=1;
	G[0].S[1].rate=1;
	G[0].S[2].rate=1;


	strcpy(G[1].gName,"sms");
	strcpy(G[1].city,"nagpur");
	strcpy(G[1].state,"maharashtra");
	strcpy(G[1].S[0].name,"cricket");
	strcpy(G[1].S[1].name,"swimming");
	G[1].noOfSports=2;
	G[1].S[0].dt[0].d=22;
	G[1].S[0].dt[0].m=10;
	G[1].S[0].dt[0].y=2018;
	G[1].S[0].dt[0].time[0].h=13;
	G[1].S[0].dt[0].time[0].m=00;
	G[1].S[0].dt[0].time[1].h=17;
	G[1].S[0].dt[0].time[1].m=00;

	G[1].S[0].dt[1].d=29;
	G[1].S[0].dt[1].m=10;
	G[1].S[0].dt[1].y=2018;
	G[1].S[0].dt[1].time[0].h=18;
	G[1].S[0].dt[1].time[0].m=00;
	G[1].S[0].dt[1].time[1].h=20;
	G[1].S[0].dt[1].time[1].m=00;
	G[1].S[0].noDates_aval=2;

	G[1].S[1].dt[0].d=21;
	G[1].S[1].dt[0].m=10;
	G[1].S[1].dt[0].y=2018;
	G[1].S[1].dt[0].time[0].h=10;
	G[1].S[1].dt[0].time[0].m=00;
	G[1].S[1].dt[0].time[1].h=15;
	G[1].S[1].dt[0].time[1].m=00;



	G[1].S[1].dt[1].d=30;
	G[1].S[1].dt[1].m=10;
	G[1].S[1].dt[1].y=2018;
	G[1].S[1].dt[1].time[0].h=11;
	G[1].S[1].dt[1].time[0].m=00;
	G[1].S[1].dt[1].time[1].h=14;
	G[1].S[1].dt[1].time[1].m=00;
	G[1].S[1].noDates_aval=2;


	G[1].S[0].s_d[0].d=25;
	G[1].S[0].s_d[0].m=10;
	G[1].S[0].s_d[0].y=2018;
	G[1].S[1].s_d[0].d=26;
	G[1].S[1].s_d[0].m=10;
	G[1].S[1].s_d[0].y=2018;


	G[1].S[0].rate=1;
	G[1].S[1].rate=1;


	strcpy(G[2].gName,"jntu");
	strcpy(G[2].city,"hyderabad");
	strcpy(G[2].state,"telangana");
	strcpy(G[2].S[0].name,"swimming");
	G[2].noOfSports=1;
	G[2].S[0].dt[0].d=15;
	G[2].S[0].dt[0].m=10;
	G[2].S[0].dt[0].y=2018;
	G[2].S[0].dt[0].time[0].h=10;
	G[2].S[0].dt[0].time[0].m=00;
	G[2].S[0].dt[0].time[1].h=15;
	G[2].S[0].dt[0].time[1].m=00;

	G[2].S[0].dt[1].d=25;
	G[2].S[0].dt[1].m=10;
	G[2].S[0].dt[1].y=2018;
	G[2].S[0].dt[1].time[0].h=07;
	G[2].S[0].dt[1].time[0].m=00;
	G[2].S[0].dt[1].time[1].h=10;
	G[2].S[0].dt[1].time[1].m=00;
	G[2].S[0].noDates_aval=2;

	G[2].S[0].s_d[0].d=30;
	G[2].S[0].s_d[0].m=10;
	G[2].S[0].s_d[0].y=2018;


	G[2].S[0].rate=1;



	strcpy(G[3].gName,"kcr");
	strcpy(G[3].city,"hyderabad");
	strcpy(G[3].state,"telangana");
	strcpy(G[3].S[0].name,"cricket");
	strcpy(G[3].S[1].name,"swimming");
	G[3].noOfSports=2;
	G[3].S[0].dt[0].d=22;
	G[3].S[0].dt[0].m=10;
	G[3].S[0].dt[0].y=2018;
	G[3].S[0].dt[0].time[0].h=10;
	G[3].S[0].dt[0].time[0].m=00;
	G[3].S[0].dt[0].time[1].h=16;
	G[3].S[0].dt[0].time[1].m=00;


	G[3].S[0].dt[1].d=31;
	G[3].S[0].dt[1].m=10;
	G[3].S[0].dt[1].y=2018;
	G[3].S[0].dt[1].time[0].h=13;
	G[3].S[0].dt[1].time[0].m=00;
	G[3].S[0].dt[1].time[1].h=18;
	G[3].S[0].dt[1].time[1].m=00;
	G[3].S[0].noDates_aval=2;


	G[3].S[1].dt[0].d=21;
	G[3].S[1].dt[0].m=10;
	G[3].S[1].dt[0].y=2018;
	G[3].S[1].dt[0].time[0].h=11;
	G[3].S[1].dt[0].time[0].m=00;
	G[3].S[1].dt[0].time[1].h=15;
	G[3].S[1].dt[0].time[1].m=00;



	G[3].S[1].dt[1].d=23;
	G[3].S[1].dt[1].m=10;
	G[3].S[1].dt[1].y=2018;
	G[3].S[1].dt[1].time[0].h=07;
	G[3].S[1].dt[1].time[0].m=00;
	G[3].S[1].dt[1].time[1].h=12;
	G[3].S[1].dt[1].time[1].m=00;
	G[3].S[1].noDates_aval=2;

	G[3].S[0].s_d[0].d=01;
	G[3].S[0].s_d[0].m=11;
	G[3].S[0].s_d[0].y=2018;
	G[3].S[1].s_d[0].d=03;
	G[3].S[1].s_d[0].m=10;
	G[3].S[1].s_d[0].y=2018;


	G[3].S[0].rate=1;
	G[3].S[1].rate=1;



	strcpy(G[4].gName,"gandhi");
	strcpy(G[4].city,"delhi");
	strcpy(G[4].state,"new_delhi");
	strcpy(G[4].S[0].name,"cricket");
	strcpy(G[4].S[1].name,"football");
	strcpy(G[4].S[2].name,"swimming");
	G[4].noOfSports=3;
	G[4].S[0].dt[0].d=28;
	G[4].S[0].dt[0].m=10;
	G[4].S[0].dt[0].y=2018;
	G[4].S[0].dt[0].time[0].h=10;
	G[4].S[0].dt[0].time[0].m=00;
	G[4].S[0].dt[0].time[1].h=14;
	G[4].S[0].dt[0].time[1].m=00;

	G[4].S[0].dt[1].d=29;
	G[4].S[0].dt[1].m=10;
	G[4].S[0].dt[1].y=2018;
	G[4].S[0].dt[1].time[0].h=11;
	G[4].S[0].dt[1].time[0].m=00;
	G[4].S[0].dt[1].time[1].h=12;
	G[4].S[0].dt[1].time[1].m=00;
	G[4].S[0].noDates_aval=2;

	G[4].S[1].dt[0].d=21;
	G[4].S[1].dt[0].m=10;
	G[4].S[1].dt[0].y=2018;
	G[4].S[1].dt[0].time[0].h=15;
	G[4].S[1].dt[0].time[0].m=00;
	G[4].S[1].dt[0].time[1].h=16;
	G[4].S[1].dt[0].time[1].m=00;


	G[4].S[1].dt[1].d=28;
	G[4].S[1].dt[1].m=10;
	G[4].S[1].dt[1].y=2018;
	G[4].S[1].dt[1].time[0].h=11;
	G[4].S[1].dt[1].time[0].m=00;
	G[4].S[1].dt[1].time[1].h=13;
	G[4].S[1].dt[1].time[1].m=00;


	G[4].S[1].dt[2].d=27;
	G[4].S[1].dt[2].m=10;
	G[4].S[1].dt[2].y=2018;
	G[4].S[1].dt[2].time[0].h=16;
	G[4].S[1].dt[2].time[0].m=00;
	G[4].S[1].dt[2].time[1].h=19;
	G[4].S[1].dt[2].time[1].m=00;
	G[4].S[1].noDates_aval=3;

	G[4].S[2].dt[0].d=28;
	G[4].S[2].dt[0].m=10;
	G[4].S[2].dt[0].y=2018;
	G[4].S[2].dt[0].time[0].h=11;
	G[4].S[2].dt[0].time[0].m=00;
	G[4].S[2].dt[0].time[1].h=15;
	G[4].S[2].dt[0].time[1].m=00;


	G[4].S[2].dt[1].d=29;
	G[4].S[2].dt[1].m=10;
	G[4].S[2].dt[1].y=2018;
	G[4].S[2].dt[1].time[0].h=06;
	G[4].S[2].dt[1].time[0].m=00;
	G[4].S[2].dt[1].time[1].h=07;
	G[4].S[2].dt[1].time[1].m=00;
	G[4].S[2].noDates_aval=2;


	G[4].S[0].s_d[0].d=20;
	G[4].S[0].s_d[0].m=10;
	G[4].S[0].s_d[0].y=2018;
	G[4].S[1].s_d[0].d=01;
	G[4].S[1].s_d[0].m=11;
	G[4].S[1].s_d[0].y=2018;
	G[4].S[2].s_d[0].d=26;
	G[4].S[2].s_d[0].m=10;
	G[4].S[2].s_d[0].y=2018;


	G[4].S[0].rate=1;
	G[4].S[1].rate=1;
	G[4].S[2].rate=1;



	strcpy(G[5].gName,"rajiv_gandhi");
	strcpy(G[5].city,"indore");
	strcpy(G[5].state,"maharashtra");
	strcpy(G[5].S[0].name,"tennis");
	strcpy(G[5].S[1].name,"football");
	G[5].noOfSports=2;
	G[5].S[0].dt[0].d=29;
	G[5].S[0].dt[0].m=10;
	G[5].S[0].dt[0].y=2018;
	G[5].S[0].dt[0].time[0].h=19;
	G[5].S[0].dt[0].time[0].m=00;
	G[5].S[0].dt[0].time[1].h=22;
	G[5].S[0].dt[0].time[1].m=00;


	G[5].S[0].dt[1].d=31;
	G[5].S[0].dt[1].m=10;
	G[5].S[0].dt[1].y=2018;
	G[5].S[0].dt[1].time[0].h=13;
	G[5].S[0].dt[1].time[0].m=00;
	G[5].S[0].dt[1].time[1].h=15;
	G[5].S[0].dt[1].time[1].m=00;
	G[5].S[0].noDates_aval=2;

	G[5].S[1].dt[0].d=22;
	G[5].S[1].dt[0].m=10;
	G[5].S[1].dt[0].y=2018;
	G[5].S[1].dt[0].time[0].h=19;
	G[5].S[1].dt[0].time[0].m=00;
	G[5].S[1].dt[0].time[1].h=23;
	G[5].S[1].dt[0].time[1].m=00;


	G[5].S[1].dt[1].d=23;
	G[5].S[1].dt[1].m=10;
	G[5].S[1].dt[1].y=2018;
	G[5].S[1].dt[1].time[0].h=10;
	G[5].S[1].dt[1].time[0].m=00;
	G[5].S[1].dt[1].time[1].h=14;
	G[5].S[1].dt[1].time[1].m=00;
	G[5].S[1].noDates_aval=2;

	G[5].S[0].s_d[0].d=20;
	G[5].S[0].s_d[0].m=10;
	G[5].S[0].s_d[0].y=2018;
	G[5].S[1].s_d[0].d=28;
	G[5].S[1].s_d[0].m=10;
	G[5].S[1].s_d[0].y=2018;


	G[5].S[0].rate=1;
	G[5].S[1].rate=1;

	
	
		
	for(i=6;i<100;i++)	
	strcpy(G[i].gName,"null");
	
	//sort();
	
	//initialSort(G,8);
	
	//getGroundInfo("jaipur");
	
	//addSport("rajiv","jaipur","hockey");
	
	//deleteSport("rajiv","jaipur","cricket");
	
	/*scanf("%s",temp.gName);
	scanf("%s",temp.city);
	scanf("%s",temp.state);
	scanf("%d",&temp.noOfSports);
	for(i=0;i<temp.noOfSports;i++)
	{
		scanf("%s",temp.S[i].name);
		//scanf("%d%d%d%d%d%d%d%d%d%d",&temp.S[i].dt[0].d,&temp.S[i].dt[0].m,&temp.S[i].dt[0].y,&temp.S[i].dt[1].d,&temp.S[i].dt[1].m,&temp.S[i].dt[1].y,&temp.S[i].time[0].h,&temp.S[i].time[0].m,&temp.S[i].time[1].h,&temp.S[i].time[1].m);
		//scanf("%s",temp.gName);
	
	}
	*/
	
	
	//addGround();
	
	//deleteGround("sms","nag1pur");
	
	//sportWithGround("cricket");
	
	//getFixturesinState("telangana");

	//UniqueSport("kcr","hyderabad");

	//getFixturesSortedonState(G,"telangana");
	
	//=printf("Enter City, start date and end date\n");
	//=scanf("%s%d%d%d%d%d%d",city,&tDate[0].d,&tDate[0].m,&tDate[0].y,&tDate[1].d,&tDate[1].m,&tDate[1].y);
	//=getFixturesinCity(city);
	
	
	//getFixturesSortedOnDate();
	
	//=printf("Enter Sport, date and particular time\n");
	//=scanf("%s%d%d%d%d%d",sport,&tempD.d,&tempD.m,&tempD.y,&tempD.time[0].h,&tempD.time[0].m);
	//=isAvailable(sport);
	
	//=printf("Enter Sport, start date and end date\n");
	//=scanf("%s%d%d%d%d%d%d",sport,&tDate[0].d,&tDate[0].m,&tDate[0].y,&tDate[1].d,&tDate[1].m,&tDate[1].y);
	//=FindLocationForGameEvents(sport);
	
	printf("Enter Sport, date and particular time\n");
	scanf("%s%d%d%d%d%d",sport,&tempD.d,&tempD.m,&tempD.y,&tempD.time[0].h,&tempD.time[0].m);
	FindLocationForGame(sport);
	
	
	for(i=0;i<total;i++)
	{
		for(j=0;j<G[i].noOfSports;j++)
		printf("%s,%s,%s,%s %d-%d-%d\n",G[i].gName,G[i].city,G[i].state,G[i].S[j].name,G[i].S[j].s_d[0].d,G[i].S[j].s_d[0].m,G[i].S[j].s_d[0].y);	
	}
}

getGroundInfo(char city[])
{
	int j;	
	sort();
	for(int i=0;i<total;i++)
	{
		if(strcmp(G[i].city,city)==0)
		{
			//printf("%s\n",G[i].gName);
			for(j=0;j<G[i].noOfSports;j++)
				printf("%s,%s,%s,%s\n",G[i].gName,G[i].city,G[i].state,G[i].S[j].name);
		}
	}
}

sort()
{
	int i,j,k;
	for (i = 1; i < total; i++)
	{
  		for (j = 0; j < total - i; j++)
		{
 			if (strcmp(G[j].gName, G[j + 1].gName) > 0)
			{
 				temp = G[j];
 				G[j] = G[j + 1];
 				G[j + 1] = temp;
 			}
		}
	}
	
	for(k=0;k<total;k++)
	{
		for (i = 1; i < G[k].noOfSports; i++)
		{
	  		for (j = 0; j < G[k].noOfSports - i; j++)
			{
	 			if (strcmp(G[k].S[j].name, G[k].S[j+1].name) > 0)
				{
	 				tempS = G[k].S[j];
	 				G[k].S[j] = G[k].S[j+1];
	 				G[k].S[j+1] = tempS;
	 			}
			}
		}

	}

}



void addSport(char GroundName[],char city[],char sport[])
{
	int found=0,i,j,pos;
	for(i=0;i<size&&found==0;i++)
	{
		if((strcmp(G[i].gName,GroundName)==0)&&(strcmp(G[i].city,city)==0))
		{
			for(j=0;j<G[i].noOfSports;j++)
			{
				if(strcmp(G[i].S[j].name,sport)==0)
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
		strcpy(G[pos].S[G[pos].noOfSports].name,sport);
		strcpy(G[pos].gName,GroundName);
		strcpy(G[pos].city,city);
		printf("SUCCESS\n");
		if(found==2)
			total++;
		G[pos].noOfSports++;
	}
}


void deleteSport(char GroundName[],char city[],char sport[])
{
	int found=0,i,j,pos,pos_Ground,pos_Sport;
	for(i=0;i<total&&found==0;i++)
	{
		if((strcmp(G[i].gName,GroundName)==0)&&(strcmp(G[i].city,city)==0))
		{
			for(j=0;j<G[i].noOfSports;j++)
			{
				if(strcmp(G[i].S[j].name,sport)==0)
				{
					found=1;
					pos_Ground=i;
					pos_Sport=j;
				}
			}
		
		}
	}
	if(found==1)
	{
		for(i=pos_Sport;i<G[pos_Ground].noOfSports-1;i++)
		{
			swap_Sports(pos_Ground,i,i+1);	
		}
		G[pos_Ground].noOfSports--;
		printf("SUCCESS\n");
	}
	else
	{
		printf("FAILURE\n");
		
	}
}

swap_Ground(int i,int j)
{
	temp=G[i];
	G[i]=G[j];
	G[j]=temp;
}

swap_Sports(int pos_Ground,int i,int j)
{
	tempS=G[pos_Ground].S[i];
	G[pos_Ground].S[i]=G[pos_Ground].S[j];
	G[pos_Ground].S[j]=tempS;
}


void addGround() //time to be added
{

	int found=0,i,j,pos;
	for(i=0;i<size&&found==0;i++)
	{
		if((strcmp(G[i].gName,temp.gName)==0)&&(strcmp(G[i].city,temp.city)==0))
		{
			found=2;
		}
		else if(strcmp(G[i].gName,"null")==0)
		{
			found=1;
			pos=i;
		}
	}
	if(found==2)
	{
		printf("FAILURE\n");
	}
	else
	{
		G[pos]=temp;
		//details should be added
		printf("SUCCESS\n");
		total++;
	}
}

void deleteGround(char GroundName[],char city[])
{			
		int i,j,pos,found=0;
		for(i=0;i<total&&found==0;i++)
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
			for(j=pos;j<total-1;j++)
			{
				swap_Ground(j,j+1);	
			}
			strcpy(G[j].gName,"null");
			strcpy(G[j].city,"null");
			total--;
			printf("SUCCESS\n");
		}
		else
		{
			printf("FAILURE\n");
			
		}
	
}


void sportWithGround(char sport[])
{
	int i,j,k;
	for(k=0;k<total;k++)
	{
		for (j = 0; j < G[k].noOfSports - i; j++)
		{
 			if (strcmp(G[k].S[j].name, sport)==0)
			{
				//printf("%s\n",G[k].gName);
				req[c]=G[k];
				c++;
			}
		}		
	}	
	sort_gName();
	for(i=0;i<c;i++)
	{
		printf("%s\t",req[i].gName);
	}
}

sort_gName()
{
	int i,j,k;
	for (i = 1; i < c; i++)
	{
  		for (j = 0; j < c - i; j++)
		{
 			if (strcmp(req[j].gName, req[j + 1].gName) > 0)
			{
 				temp = req[j];
 				req[j] = req[j + 1];
 				req[j + 1] = temp;
 			}
		}
	}
}

getFixturesinState(char state[])
{
		
	int i,j,k;
	c=0;
	for(int i=0;i<total;i++)
	{
		if(strcmp(G[i].state,state)==0)
		{
			//printf("%s\n",G[i].sport);
			req[c]=G[i];
			c++;
		}
	}
	sortCGS();
	for(i=0;i<c;i++)
	{
		for(j=0;j<req[i].noOfSports;j++)
		{
			if(req[i].S[j].s_d[0].d!=0)
			{
				printf("%s,%s,%s,%s\n",req[i].gName,req[i].city,req[i].state,req[i].S[j].name);	
			}
		}
	}
}

sortCGS()
{
	int i,j,k;
	for (i = 1; i < c; i++)
	{
  		for (j = 0; j < c - i; j++)
		{
 			if (strcmp(req[j].city, req[j + 1].city) > 0)
			{
 				temp = req[j];
 				req[j] = req[j + 1];
 				req[j + 1] = temp;
 			}
	else if((strcmp(req[j].city, req[j + 1].city)==0)&&(strcmp(req[j].gName,req[j+1].gName)>0))
			{	
				temp=req[j];
				req[j]=req[j+1];
				req[j+1]=temp;		
			}
		}
	}
	for(k=0;k<c;k++)
	{
		for (i = 1; i < req[k].noOfSports; i++)
		{
	  		for (j = 0; j < req[k].noOfSports - i; j++)
			{
	 			if (strcmp(req[k].S[j].name,req[k].S[j+1].name) > 0)
				{
	 				tempS = req[k].S[j];
	 				req[k].S[j] = req[k].S[j+1];
	 				req[k].S[j+1] = tempS;
	 			}
			}
		}

	}
}


UniqueSport(char ground[],char city[])
{
	int i,j,k,pos_req,found=0,count=0;
	c=0;
	for(i=0;i<100;i++)	
		strcpy(req[i].gName,"null");
	for(i=0;i<total&&found==0;i++)
	{
		if(strcmp(G[i].gName,ground)==0&&(strcmp(G[i].city,city)==0))
		{
			pos_req=i;
			found=1;
		}
	}
	for(i=0;i<total;i++)
	{
		if((strcmp(G[i].gName,ground)!=0)&&(strcmp(G[i].city,city)==0))
		{
			req[c]=G[i];
			c++;
		}
	}
	count=0;
	while(count!=G[pos_req].noOfSports)
	{
		for(i=0;i<c;i++)
		{	
			found=0;
			for(j=0;j<req[i].noOfSports&&found==0;j++)
			{
				if(strcmp(req[i].S[j].name,G[pos_req].S[count].name)==0)
				{
					found=1;
				}
			}
			if(found==0)
			{
				printf("%s\t",G[pos_req].S[count].name);
			}
		}
		count++;
	}

}


getFixturesinCity(char city[])
{
	int i,j,k,found=0,once=0;
	c=0;
	
	for(i=0;i<total;i++)
	{
		if((strcmp(G[i].city,city)==0))
		{
			req[c]=G[i];
			c++;
		}
	}
	sort_g();
	for(i=0;i<c;i++)
	{
		for(j=0;j<req[i].noOfSports;j++)
		{
			found=0;
if((req[i].S[j].s_d[0].d>=tDate[0].d)&&(req[i].S[j].s_d[0].m>=tDate[0].m)&&(req[i].S[j].s_d[0].y>=tDate[0].y)&&\
(req[i].S[j].s_d[0].d<=tDate[1].d)&&(req[i].S[j].s_d[0].m<=tDate[1].m)&&(req[i].S[j].s_d[0].y<=tDate[1].y))
				{
					
					
					printf("%s ",req[i].S[j].name);
					found=1;
					once=1;
				}
			
		}
	}
	if(once==0)
		printf("No Empty Slot\n");
}

sort_g()
{
	int i,j,k;
	for (i = 1; i < c; i++)
	{
  		for (j = 0; j < c - i; j++)
		{
 			if (strcmp(req[j].gName, req[j + 1].gName) > 0)
			{
 				temp = req[j];
 				req[j] = req[j + 1];
 				req[j + 1] = temp;
 			}
		}
	}
	for(k=0;k<c;k++)
	{
		for (i = 1; i < req[k].noOfSports; i++)
		{
	  		for (j = 0; j < req[k].noOfSports - i; j++)
			{
	 			if (strcmp(req[k].S[j].name,req[k].S[j+1].name) > 0)
				{
	 				tempS = req[k].S[j];
	 				req[k].S[j] = req[k].S[j+1];
	 				req[k].S[j+1] = tempS;
	 			}
			}
		}

	}

}

getFixturesSortedOnDate()
{
	int i,j,k;
	for(k=0;k<total;k++)
	{
		for (i = 1; i <G[k].noOfSports ; i++)
		{
	  		for (j = 0; j < G[k].noOfSports - i; j++)
			{
	 			if (G[k].S[j].s_d[0].y>G[k].S[j+1].s_d[0].y)
				{
	 				tempS = G[k].S[j];
	 				G[k].S[j] = G[k].S[j+1];
	 				G[k].S[j+1] = tempS;
	 			}
	 			if(G[k].S[j].s_d[0].y==G[k].S[j+1].s_d[0].y)
	 			{
	 				if (G[k].S[j].s_d[0].m>G[k].S[j+1].s_d[0].m)
					{
		 				tempS = G[k].S[j];
		 				G[k].S[j] = G[k].S[j+1];
		 				G[k].S[j+1] = tempS;
		 			}
		 			if(G[k].S[j].s_d[0].m==G[k].S[j+1].s_d[0].m)
		 			{
		 				if (G[k].S[j].s_d[0].d>G[k].S[j+1].s_d[0].d)
						{
			 				tempS = G[k].S[j];
			 				G[k].S[j] = G[k].S[j+1];
			 				G[k].S[j+1] = tempS;
			 			}
		 			}
	 			}
	 		}
	 	}
	 }
	 for(i=0;i<total;i++)
	{
		for(j=0;j<G[i].noOfSports;j++)
		printf("%s,%s,%s,%s %d-%d-%d\n",G[i].gName,G[i].city,G[i].state,G[i].S[j].name,G[i].S[j].s_d[0].d,G[i].S[j].s_d[0].m,G[i].S[j].s_d[0].y);	
	}
	 
}

isAvailable(char sport[])
{
	int i,j,k,found,once=0;
	for(i=0;i<total;i++)
	{
		for(j=0;j<G[i].noOfSports;j++)
		{
			if(strcmp(G[i].S[j].name,sport)==0)
			{
				found=0;
				for(k=0;k<G[i].S[j].noDates_aval&&found==0;k++)
				{
					if((tempD.d==G[i].S[j].dt[k].d)&&(tempD.m==G[i].S[j].dt[k].m)&&(tempD.y==G[i].S[j].dt[k].y))
					{
				
						if((G[i].S[j].dt[k].time[0].h<=tempD.time[0].h)&&(G[i].S[j].dt[k].time[0].m<=tempD.time[0].m)&&\
						(G[i].S[j].dt[k].time[1].h>tempD.time[0].h)||(G[i].S[j].dt[k].time[1].h==tempD.time[0].h)&&(G[i].S[j].dt[k].time[1].m>tempD.time[0].m))
						{
							printf("%s,%s,%s,%s\n",G[i].gName,G[i].city,G[i].state,G[i].S[j].name);	
							found=1;
							once=1;		
						}
					}
					
				}
			}
		}
	}
	if(once==0)
		printf("Not Available\n");
}

FindLocationForGameEvents(char sport[])
{
	int i,j,k,once=0;
	for(i=0;i<total;i++)
	{
		for(j=0;j<G[i].noOfSports;j++)
		{
			if(strcmp(G[i].S[j].name,sport)==0)
			{
				if(((G[i].S[j].s_d[0].d>=tDate[0].d)&&(G[i].S[j].s_d[0].m>=tDate[0].m)&&(G[i].S[j].s_d[0].y>=tDate[0].y)&&(G[i].S[j].s_d[0].d<=tDate[1].d)\
				&&(G[i].S[j].s_d[0].m<=tDate[1].m)&&(G[i].S[j].s_d[0].y<=tDate[1].y)))	
				{
					printf("%s,%s,%s,%s %d-%d-%d\n",G[i].gName,G[i].city,G[i].state,G[i].S[j].name,G[i].S[j].s_d[0].d,G[i].S[j].s_d[0].m,G[i].S[j].s_d[0].y);
					once=1;
				}
				else if((G[i].S[j].s_d[0].y>=tDate[0].y)&&(G[i].S[j].s_d[0].y<tDate[1].y))
				{
					printf("%s,%s,%s,%s %d-%d-%d\n",G[i].gName,G[i].city,G[i].state,G[i].S[j].name,G[i].S[j].s_d[0].d,G[i].S[j].s_d[0].m,G[i].S[j].s_d[0].y);
					once=1;
				}
				else if((G[i].S[j].s_d[0].y==tDate[0].y)&&(G[i].S[j].s_d[0].y==tDate[1].y))
				{
					if((G[i].S[j].s_d[0].m>=tDate[0].m)&&(G[i].S[j].s_d[0].m<tDate[1].m)&&(G[i].S[j].s_d[0].d>=tDate[0].d))
					{
						printf("%s,%s,%s,%s %d-%d-%d\n",G[i].gName,G[i].city,G[i].state,G[i].S[j].name,G[i].S[j].s_d[0].d,G[i].S[j].s_d[0].m,G[i].S[j].s_d[0].y);
						once=1;
					}
					else if((G[i].S[j].s_d[0].m>tDate[0].m)&&(G[i].S[j].s_d[0].d<=tDate[1].d)&&(G[i].S[j].s_d[0].m<=tDate[1].m))
					{
						printf("%s,%s,%s,%s %d-%d-%d\n",G[i].gName,G[i].city,G[i].state,G[i].S[j].name,G[i].S[j].s_d[0].d,G[i].S[j].s_d[0].m,G[i].S[j].s_d[0].y);
						once=1;
					}
				}
			}
		}
	}
	if(once==0)
		printf("Not Available\n");
}


FindLocationForGame(char sport[])
{
	int i,j,k,found,once=0;
	for(i=0;i<total;i++)
	{
		for(j=0;j<G[i].noOfSports;j++)
		{
			if(strcmp(G[i].S[j].name,sport)==0)
			{
				found=0;
				for(k=0;k<G[i].S[j].noDates_aval&&found==0;k++)
				{
					if((tempD.d!=G[i].S[j].s_d[0].d)||(tempD.m!=G[i].S[j].s_d[0].m)||(tempD.y!=G[i].S[j].s_d[0].y))
					{
						//it will enter only if the game is not scheduled on given date
						if((tempD.d==G[i].S[j].dt[k].d)&&(tempD.m==G[i].S[j].dt[k].m)&&(tempD.y==G[i].S[j].dt[k].y))	
						{
							if((G[i].S[j].dt[k].time[0].h<=tempD.time[0].h)&&(G[i].S[j].dt[k].time[0].m<=tempD.time[0].m)&&\
							(G[i].S[j].dt[k].time[1].h>tempD.time[0].h)||(G[i].S[j].dt[k].time[1].h==tempD.time[0].h)&&(G[i].S[j].dt[k].time[1].m>tempD.time[0].m))
							{
								printf("%s,%s,%s,%s\n",G[i].gName,G[i].city,G[i].state,G[i].S[j].name);	
								found=1;
								once=1;		
							}
						}
					}
					
				}
			}
		}
	}
	if(once==0)
		printf("Not Available\n");
}











































































/*
datecmp(struct date d1,struct date d2)
{

	if(d1.y==d2.y)
	{
		if(d1.m==d2.m)
		{
			if(d1.d==d2.d)
			{
				res=0;		
			}
			else if(d1.d<d2.d)
				res=-1;
			else
		}
	}


}*/




/*
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


if(j==G[i].noOfSports&&found==0)
				{
					strcpy(G[i].S[j].name,sport);
					printf("SUCCESS");
					G[i].noOfSports++;
					found=2;
				}





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

 groundRecord to be added 

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


void deleteGround(struct grounds G[],char GroundName[],char city[])
{
	int found=0,i=0,j,pos,suc=0,c=0,size;
	size=total; //size will help in making sure all records are checked
	while(c!=size)//c will help in counting no. of times we checked
	{	
		size=total;		
		found=0;
		c=0;
		for(i=0;i<total&&found==0;i++)
		{
			if(strcmp(G[i].gName,GroundName)==0)
			{
				if(strcmp(G[i].city,city)==0)
				{
					found=1;
					pos=i;
					
				}
			}
			c++;
		}
		if(found==1)
		{
			for(j=pos;j<total-1;j++)
			{
				swap(G,j,j+1);	
			}
			strcpy(G[j].gName,"null");
			strcpy(G[j].city,"null");
			total--;
			if(suc==0)
				printf("SUCCESS\n");
			suc=1;
		}
		else if(suc!=1)
		{
			printf("FAILURE\n");
			
		}
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

















