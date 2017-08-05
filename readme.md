[![Build Status](https://travis-ci.org/wuli133144/rb_tree_test.svg?branch=master)](https://travis-ci.org/wuli133144/rb_tree_test)

#rb_tree test
>test freebsd kernel tree.h
>hope it useful to you
>add it to your project

#install
-----------------------------------------------------------------------------------------------
run:
```
  make
```
output:
```
jackwu@jackwu-PC:/media/jackwu/DATA/sys_soft/cgwin/home/JackWU/unix805$ make
gcc -o test src/main.c
In file included from src/main.c:4:0:
src/main.c: In function ‘append’:
src/main.c:31:24: warning: ‘return’ with a value, in function returning void
       return RB_INSERT(exp,&st_task,a);

src/../inc/tree.h:757:31: note: in definition of macro ‘RB_INSERT’
 #define RB_INSERT(name, x, y) name##_RB_INSERT(x, y)
                               ^~~~
src/main.c:30:6: note: declared here
 void append(task_t *a){
      ^~~~~~
./test
1
2
```

-----------------------------------------------------------------------------------------------
#Contributing

I will always merge *working* bug fixes. However, if you want to add something new to the API, please create an "issue" on github for this first  if i am free i will merge them if it's right
Remember to follow jackwu's code style and write appropriate tests.

## License
[The MIT License (MIT)](http://opensource.org/licenses/mit-license.php)