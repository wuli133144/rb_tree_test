
#include <stdio.h>
#include <stdlib.h>
#include "../inc/tree.h"

int main(int arc,char **argv){
    
     task_t a,b;
     a.value=2;
     b.value=1;

     append(&a);
     append(&b);
     
     print();
  
    return 0;
}