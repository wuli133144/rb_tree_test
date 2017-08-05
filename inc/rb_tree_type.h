
/*
 Copyright <YEAR> <COPYRIGHT HOLDER>

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"),
to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

*/



#include"tree.h"


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

RB_HEAD(exp,__node_task);

struct exp st_task=RB_INITIALIZER(NULL);

RB_PROTOTYPE(exp,__node_task,entry,cmp);
RB_GENERATE(exp,__node_task,entry,cmp);


void append(task_t *a){
      return RB_INSERT(__node_task,&st_task,a);
}



void print(void)
{
	task_t *item;
     
	RB_FOREACH(item, __node_task, &st_task) {
		printf("%d\n", item->value);
	}

}



