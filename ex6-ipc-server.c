#include<stdio.h>
#include<sys/types.h>
#include<sys/msg.h>
#include<sys/ipc.h>
#include<string.h>
#define msgsz 3
typedef struct msgbuffer
{
	long mtype;
	char mtext[msgsz];
}mbuffer;
int main()
{
	int msgflg=IPC_CREAT|0666;
	key_t key;
	int msqid,buffer;
	mbuffer mb;
	key=1234;
	if((msqid=msgget(key,msgflg))<0)
	{
		perror("msgget");
		return 1;
	}
	else
		mb.mtype=1;
	strcpy(mb.mtext,"HAI");
	buffer=strlen(mb.mtext);
	if(msgsnd(msqid,&mb,buffer,msgflg)<0)
	{
		printf("%d%ld%s%d",msqid,mb.mtype,mb.mtext,buffer);
		perror("msgsnd");
		return 1;
	}
	else
		printf(" MESSAGE : %s IS SENT ",mb.mtext);
	return 0;
}
