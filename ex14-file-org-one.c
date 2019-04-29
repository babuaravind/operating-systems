#include<stdio.h>
void main()
{
int n,i,dns[50],j;
char dn[50][10];
char file[10][10][10];
printf("enter the number of directories"); 
scanf("%d",&n);
for(i=0;i<n;i++)
{
			printf("\nEnter the name of the directories %d along with its size ",i+1);
			scanf("%s%d",dn[i],&dns[i]);
}
printf("\nDirectories created successfully");
for(i=0;i<n;i++)
{
    printf("\nEnter the file name in the directory\"%s\"\n",dn[i]);
    for(j=0;j<dns[i];j++)
    {
        scanf("%s",file[i][j]);
    }
}
for(i=0;i<n;i++)
{
    printf("Directory : %s\n",dn[i]);
    for(j=0;j<dns[i];j++)
    {
        printf("\tFile %d:%s\n",j+1,file[i][j]);
    }
}
}
