#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int strmat(char ln[],char pa[])
{
 int i,j,k;
  	for(i=0;ln[i]!='\0';i++)
  	{
    		for(j=i,k=0;ln[j]==pa[k];j++,k++)
   	     		if(k>0&&pa[k]=='\0')
		      		return(1);
  	}
  	return 0;
}
int main(int argc,char *argv[])
{
 FILE *fp1;
  	char ln[80];
  	if(argc<3)
  	{
   		 printf("USAGE: FILE_NAME SOURCE_FILE SEARCH PATTERN\n");
  	}
  	else
  	{
		fp1=fopen(argv[2],"r");
		if(fp1=='\0')
  		{
  			 printf("\n SOURCE FILE CANNOT BE OPENED\n");
  		  	exit(0);
 		}
  	}
  	while(fgets(ln,80,fp1))
  	{
   		if(strmat(ln,argv[3]))
     		printf("%s",ln);
  	}
  	fclose(fp1);
}