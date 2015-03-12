#include <stdio.h>

enum unionType {CHAR,INT};

typedef enum unionType unionType;

union coolUnion {
    char c;
    int  i;
    unionType type;
};

typedef  union coolUnion coolUnion;


int main(){
    coolUnion u;
    printf("size of union = %d\n",sizeof(coolUnion));
    u.type = INT;
    u.i = 71;
    // 71 is G in ascii
    printf("u.c=%c\n",u.c);




}
