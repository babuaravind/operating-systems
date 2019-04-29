#include<stdio.h>
#include<sys/types.h>
#include<sys/msg.h>
#include<sys/ipc.h>
#include<stdio.h>
#define msgsz 8
typedef struct msgbuffer
{
	long mtype;
	char mtext[msgsz];
}
mbuffer;
int main()
{
	key_t key;
	int msqid,buffer;
	mbuffer mb;
	key=1234;
	if((msqid=msgget(key,0666))<0)
	{
		perror("msgget");
		return 0;
	}
	if(msgrcv(msqid,&mb,msgsz,1,0)<0)
	{
		perror("msgrev");
		return 1;
	}
	printf(" MESSAGE : %s IS RECEIVED\n",mb.mtext);
	return 0;
}