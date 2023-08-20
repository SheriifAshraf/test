#include "staticQueue.h"

int 
main(void)
{
    queue_t q1;

    queue_init(&q1);

    queue_print(&q1);

    queue_enque(&q1, 10);    
    queue_enque(&q1, 20);    
    queue_enque(&q1, 30);    
    queue_enque(&q1, 40);    
    queue_enque(&q1, 50);    
    queue_enque(&q1, 60);    
    queue_enque(&q1, 70);    
    queue_enque(&q1, 80);

    queue_print(&q1);
    
    queue_deque(&q1);
    queue_deque(&q1);
    queue_deque(&q1);
    queue_deque(&q1);
    queue_deque(&q1);
    queue_deque(&q1);
    queue_deque(&q1);
    queue_deque(&q1);
    queue_deque(&q1);
    queue_deque(&q1);
    queue_deque(&q1);
    queue_deque(&q1);
    queue_deque(&q1);
    queue_deque(&q1);

    queue_print(&q1);
}