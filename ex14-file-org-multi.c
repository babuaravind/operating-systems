#include<stdio.h>

void main()
{
	int nsd[10],nssd[10][10],nf[10][10][10],nd,i,j,k,l;
	char nad[5][10],nasd[ 10][10][10],nassd[10][10][10][10],nafi[5][10][10][10][10];
	
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
			printf("\nEnter the number of sub-directory in sub-directory \"%s\" : ",nasd[i][j]);
			scanf("%d",&nssd[i][j]);
			for(l=0;l<nssd[i][j];l++)
			{
                printf("\nEnter the names of the sub-directory %d  in sub-directory  \"%s\" : ",(l+1),nasd[i][j]);
				scanf("%s",nassd[i][j][l]);
                printf("\nEnter the number of files in sub-directory \"%s\" : ",nassd[i][j][l]);	
				scanf("%d",&nf[i][j][l]);		
			}
		}
	}
    	printf("\nReady  to get the file names\n\n");
        for(i=0;i<nd;i++)
        {	
            for(j=0;j<nsd[i];j++)
            {
                for(k=0;k<nssd[i][j];k++)
                {
                    printf("\nEnter the file names in sub-directory \"%s\" of sub-directory \"%s\" in directory \"%s\"""\n",nassd[i][j][k],nasd[i][j],nad[i]);
                    for(l=0;l<nf[i][j][k];l++)
					{
						printf("file %d : ",l+1);
						scanf("%s",nafi[i][j][k][l]);
					}
			}
		}
	}
	for(i=0;i<nd;i++)
	{
		printf("\ndirectory : %s",nad[i]);
		for(j=0;j<nsd[i];j++)
		{
			printf("\n\tsub-directory  : %s",nasd[i][j]);
			for(k=0;k<nssd[i][j];k++)
			{
				printf("\n\t\t\tsub-directory  :%s",nassd[i][j][k]);
				for(l=0;l<nf[i][j][k];l++)
				{
					printf("\n\t\t\t\tFile %d : %s",l+1,nafi[i][j][k][l]);
				}
	}
}
    }
    }
