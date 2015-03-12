#include <stdio.h>
#define HERE    fprintf(stderr, "[LOG]%s:%d\n",__FILE__,__LINE__);

int main(){
    int a = 1;
    HERE
}
