#include <sys/ipc.h>
# define NULL 0
#include <sys/shm.h>
#include <sys/types.h>
# include<unistd.h>
# include<stdio.h>
# include<stdlib.h>
# include<string.h>
#include <sys/wait.h>

int main()
{
	int pid;
	char *a,*b,*c;
	int id,n,i;
	id=shmget(112,50,IPC_CREAT | 00666);
	a = shmat(id,NULL,0);
	a[49] = '#';
	pid=fork();
	if(pid>0) //Parent
	{
		
		b = shmat(id,NULL,0);
		printf("\nParent: Enter the the word:");
		scanf("%s",b);
		b[49] = '0';
		wait(NULL);
		shmdt(b);
	}
	else  //Child
	{
        c = shmat(id,NULL,0);
		while(c[49] == '#');
		for(i = 0; i < strlen(c);i++)
		{
			if(*(c + i) >= 'a')
				*(c + i) = *(c + i) + ('A' - 'a'); 
			else
				*(c + i) = *(c + i) - ('A' - 'a'); 
		}
		printf("Child : %s\n",c);
		shmdt(c);
	}
	shmctl(id,IPC_RMID,NULL);
}