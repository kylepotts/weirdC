#include <stdio.h>

void doSomething(){
    int i;
    printf("doing something\n");
}

int main(){
    int i;
    for(i=0; i<10;i++,doSomething()){
        printf("i=%d\n",i);
    }
}
