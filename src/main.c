
#include <stdio.h>
#include <stdlib.h>
#include "../inc/tree.h"

typedef struct __node_task{
 int tid;
 int value;
 RB_ENTRY(__node_task)entry;
}task_t;


/*comp a and b*/
/*note:com must return >0 value and <0 value*/
int cmp(task_t *a,task_t *b){
      return a->value>b->value?1:-1;
}

struct __node_task *st_task=RB_INITIALIZER(NULL);

RB_PROTOTYPE(st_task,__node_task,entry,cmp);
RB_GENERATE(st_task,__node_task,entry,cmp);


void append(task_t *a){
      return RB_INSERT(__node_task,&st_task,a);
}



void print(void)
{
	task_t *item;
     
	RB_FOREACH(item, task_t, &st_task) {
		printf("%d\n", item->value);
	}

}





int main(int arc, char **argv) {

  
  struct __node_task a, b;
  a.value = 2;
  b.value = 1;

  append(&a);
  append(&b);

  print();

  return 0;
}