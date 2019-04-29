#include<stdio.h>
main()
{
	int i,j,n,wt[10],ta[10],at[10],bt[10],tot_wt=0,tot_ta=0,ft[10],t;
	int s[10],prid[10],p[10],max=0,temp,stt=0,ts=0,x=0;
	float avg_wt,avg_ta;
	printf("Enter the no. of process:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		prid[i]=i;
		printf("\n Enter the Arrival time of process %d:",i);
		scanf("%d",&at[i]);
		printf("\n Enter the Burst time of the process %d:",i);
		scanf("%d",&bt[i]);
		wt[i]=0;
		p[i]=0;
		if(at[i]>max)
		{
			max=at[i];
		}
	}
	printf("\n Enter the time Slice:");
	scanf("%d",&ts);
	for(i=1;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(at[i]>at[j])
			{
				t=at[i];
				at[i]=at[j];
				at[j]=t;
				t=bt[i];
				bt[j]=bt[j];
				bt[j]=t;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		s[i]=bt[i];
	}
	i=1;
	x=0;
	while(x<n)
	{	
		if(p[i]==1)
		goto con;
		if(at[i]>stt)
		{	
			temp=max;
			for(i=1;i<=n;i++)
			{
				if(p[i]==0 && at[i]<=temp)
				{
					temp=at[i];
				}
			}
			if(temp>stt)
			{
				stt=temp;
			}
			if(at[i]>stt)
				goto con;
		}
		if(s[i]>ts)
		{
			s[i]=s[i]-ts;
			stt=stt+ts;
		}
		else
		{
			stt=stt+s[i];
			ft[i]=stt;
			s[i]=0;
			p[i]=1;
			x++;
		}
		con:
		i++;
		if(i>n)
		i=1;
	}
	for(i=1;i<=n;i++)
	{
		ta[i]=ft[i]-at[i];
		wt[i]=ta[i]-bt[i];
		tot_ta+=ta[i];
		tot_wt+=wt[i];
	}
	avg_wt=(float)tot_wt/n;	
	avg_ta=(float)tot_ta/n;
	printf("\n PNO\tARR TIME\tBURST TIME\tWAIT TIME\t TURN TIME\t FINISH 	TIME");
	for(i=1;i<=n;i++)	
		printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d\t%d",i,at[i],bt[i],wt[i],ta[i],ft[i]);
	printf("\n The Average Waiting Time is:%0.2f",avg_wt);
	printf("\n The Average Turn Time is   :%0.2f",avg_ta);}