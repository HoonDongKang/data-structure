#include <stdio.h>
#include "PriorityQueue.h"
#include "PriorityQueue.c"

int DataPriorityComp(char c1, char c2)
{
    return c2-c1;
}

int main(void)
{
    PQueue pq;
	PQueueInit(&pq, DataPriorityComp);

	PEnqueue(&pq, 'A');
	PEnqueue(&pq, 'B');
	PEnqueue(&pq, 'C');
	printf("%c \n", PDequeue(&pq));

	PEnqueue(&pq, 'A');
	PEnqueue(&pq, 'B');
	PEnqueue(&pq, 'C');
	printf("%c \n", PDequeue(&pq));

	while(!PQIsEmpty(&pq))
		printf("%c \n", PDequeue(&pq));

	return 0;
}