#include<stdio.h>
void main()
{
	int nsd[50],nf[100][100],nd,i,j,k;
	char nad[50][50],nasd[50][50][50],nafi[50][50][50][50];
	printf("\nEnter the number of directories : ");
	scanf("%d",&nd);
	for(i=0;i<nd;i++)
	{
		printf("\nEnter the name of the directory %d : ",i+1);
		scanf("%s",nad[i]);
		printf("\nEnter the number of sub-directories in directory \"%s\" : ",nad[i]);
		scanf("%d",&nsd[i]);
		for(j=0;j<nsd[i];j++)
		{
            printf("\nEnter the names of the sub-directory %d  in directory  \"%s\" : ",(j+1),nad[i]);
			scanf("%s",nasd[i][j]);
			printf("\nEnter the number of files in sub-directory \"%s\" : ",nasd[i][j]);
			scanf("%d",&nf[i][j]);
		}
	}
	printf("\nReady  to get the file names\n\n");
	for(i=0;i<nd;i++)
	{	for(j=0;j<nsd[i];j++)
		{
			printf("\nEnter the file names in subdirectory \"%s\" of directory \"%s\"\n",nasd[i][j],nad[i]);
			for(k=0;k<nf[i][j];k++)
			{
				printf("file %d : ",k+1);
				scanf("%s",nafi[i][j][k]);
			}
		}
	}
	for(i=0;i<nd;i++)
	{
		printf("\ndirectory : %s",nad[i]);
		for(j=0;j<nsd[i];j++)
		{
			printf("\n\tsub-directory  : %s",nasd[i][j]);
			for(k=0;k<nf[i][j];k++)
			{
				printf("\n\t\t\t%s",nafi[i][j][k]);
			}
		}
	}
}
