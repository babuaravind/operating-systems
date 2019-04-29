#include<stdlib.h>
#include<stdio.h>
typedef int semaphore;
semaphore mutex=1, empty=1,full=0;
char who;
int a,count=0,n;
void wait(semaphore*);
void signal(semaphore *);
void producer()
{
	static int i=0;
	if(i<n)
	{
	do{
		wait(&empty);
		wait(&mutex);
		printf("\nproducer: ");
		scanf("%d",&a);
		i++;
		who='p';
		signal(&mutex);
		signal(&full);
	}while(1);
	}
	else
	exit(0);
}

void consumer()
{
	static int i=0;
	if(i<n)
	{
	do
	{
	wait(&full);
	wait(&mutex);
	printf("%d consumed",a);
	i++;
    who='c';
	signal(&mutex);
	signal(&empty);
	}while(1);
	}
	else
	exit(0);	
}
void wait(semaphore *s)
{
	if(*s<=0)
	{
	if(who=='p')
	consumer();
	else
	producer();
	}
	else
	*s=*s-1;
}

void signal(semaphore *s)
{
	*s=*s+1;
}

void main()
{
	printf("\nEnter the number of data to be shared\t");
	scanf("%d",&n);
	producer();
}
