#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    
    int v[10] = {3,2,3,5,4,9,6,0,1,2};
    int i;
    for (i=0;i<10;i++){
        printf("%d", v[i]);
    }

    int v1[13] = {1,2,5,3,3,5,1,5,1,43,235,643,927};
    int v2[3];
    v2[0]=5;
    v2[1]=11;
    v2[2]=3;
    printf("%d", sizeof(v1)/sizeof(int));

    return 0;
}