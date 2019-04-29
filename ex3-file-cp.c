#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	FILE *fp1, *fp2;
	char ln[80];
	fp1=fopen(argv[1],"r");
	fp2=fopen(argv[2],"w");
	while(fgets(ln,80,fp1))
	{
		fputs(ln,fp2);
	}
	printf("FILE HAS BEEN COPIED SUCCESSFULLY\n");
	fclose(fp1);
	fclose(fp2);
}

// FILE fgets fputs fopen