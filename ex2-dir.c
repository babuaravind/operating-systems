#include<stdio.h>
#include<sys/types.h>
#include<sys/dir.h>
void main(int argc,char *argv[])
{
	DIR *dir;
	struct dirent *rddir;
	printf("LISTING THE DIRECTORY CONTENT\n");
	dir=opendir(argv[1]);
	printf("THE CURRENT DIRECTORY FILES ARE:\n");
	while((rddir=readdir(dir))!=NULL)
	{
		printf("%s\n",rddir->d_name);
	}
	closedir(dir);
}

// DIR dirent opendir() readir() d_name closedir()