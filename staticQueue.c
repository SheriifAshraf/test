#include "staticQueue.h"

#define FULL        32
#define EMPTY       23

int isEmpty(queue_t * queue)
{
    if ((queue->front == -1 && queue->rear == -1) || 
        (queue->rear < queue->front))
    {
        queue_init(queue);
        return EMPTY;   
    }
    return 4;
}

int isFull(queue_t * queue)
{
    if (queue->front == QUEUE_ARR_SIZE - 1)
    {
        return FULL;   
    }
    return 4;
}

void queue_init(queue_t* queue)
{
    queue->front = -1;
    queue->rear = -1;
}

void queue_enque(queue_t* queue, int data)
{
    if (isEmpty(queue) == EMPTY)
    {
        queue->front++;
        queue->rear++;
        queue->arr[0] = data;
    }
    else if(isFull(queue) != FULL)
    {
        queue->arr[++queue->rear] = data;
    }
}
int queue_deque(queue_t* queue)
{
    int data;
    if (isEmpty(queue) != EMPTY)
    {
        data = queue->arr[queue->front++];
    }
    return data;
}

void queue_print(queue_t* queue)
{
    printf("[ Front ] -> ");
    int fr=queue->front;
    int rr=queue->rear;
    while ((fr<=rr) && (rr!= -1 && fr != -1))
    {
        printf("%d -> ", queue->arr[fr++]);     
    }
    printf("[ Rear ]\n");
}
