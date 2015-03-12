#include <stdio.h>


struct s {
    int a;
    char* c;
};


int main(){
    struct s s1 = {0};
    printf("size of struct=%d\n",sizeof(struct s));
    printf("a=%d\n",s1.a);
    printf("c=%p\n",s1.c);
}
