#include <stdio.h>

#define QUEUE_ARR_SIZE      100

typedef struct 
{
    int arr[QUEUE_ARR_SIZE];
    int front;
    int rear;
}queue_t;

void queue_init(queue_t* queue);
void queue_enque(queue_t* queue, int data);
int queue_deque(queue_t* queue);

void queue_print(queue_t* queue);

