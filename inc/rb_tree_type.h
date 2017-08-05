#include"tree.h"


typedef void (*handler)(int);

typedef struct __node_task{
 int tid;
 handler callback;
 RB_ENTRY(__node_task)entry;
}task_t;


RB_PROTOTYPE(rb_task,__node_task,entry,cmp);

RB_GENERATE(rb_task,__node_task,entry,cmp);