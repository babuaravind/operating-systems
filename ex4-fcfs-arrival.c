#include<stdio.h>
void main()
{
int n,i,at[10],bt[10],ft[10],wt[10],tt[10],sum=0,sum1=0;float avr,avr1;
char pn[10][10];
printf("Enter number of process");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the name,arrival time and busting time of process");
scanf("%s %d %d",&pn[i],&at[i],&bt[i]);
}
ft[0]=bt[0];
wt[0]=0;
tt[0]=bt[0]+wt[0];
for(i=1;i<n;i++)
{
    if(ft[i-1]>=at[i])
    {
        ft[i]=ft[i-1]+bt[i];
    }
    else
    {
        ft[i]=at[i]+bt[i];
    }
    wt[i]=ft[i]-bt[i]-at[i];
    tt[i]=bt[i]+wt[i];
    sum+=wt[i];
    sum1+=tt[i];
}
avr=sum/n;
avr1=sum1/n;
printf("pro");
printf("\t at\t bt\t ft\t wt\t tt");
for(i=0;i<n;i++)
{
printf("\n %s \t %d\t %d\t %d\t %d\t %d",pn[i],at[i],bt[i],ft[i],wt[i],tt[i]);
}
printf("\n \t \t \t sum %d sum1 %d",sum,sum1);
printf("\n \t \t \t \tavr wt %f\t avr tt %f",avr,avr1);
}

