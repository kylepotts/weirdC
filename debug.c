#include <stdio.h>
#define HERE    fprintf(stderr, "[LOG]%s:%d:%s\n:",__FILE__,__LINE__,__func__);

int fib(int n){
    HERE
    if(n==0){
        return 1;
    }else{
        return fib(n-1);
    }
}



int main(){
    int a = 1;
    HERE
    int b = fib(4);
}
