#include <stdio.h>

enum unionType {CHAR,INT};

typedef enum unionType unionType;

union coolUnion {
    char c;
    int  i;
};

typedef  union coolUnion coolUnion;

struct coolStruct {
    coolUnion u;
    unionType type;
};

typedef struct coolStruct coolStruct;


int main(){
    coolUnion u;
    printf("size of union = %d\n",sizeof(coolUnion));
    coolStruct s1;
    s1.u = u;
    s1.u.i = 71;
    s1.type = INT;
    // 71 is G in ascii
    printf("u.c=%c\n",s1.u.c);




}
