#include <stdio.h>

#define DSIZE 10000
int T, D, Q, P;

char cars[DSIZE][25];
int L[DSIZE];
int H[DSIZE];

void check_db(){
    int index = -1;
    for(int i=0; i<D; ++i){
        // check larger first
        if (P <= H[i] && P >= L[i]){
            if(index != -1){
                // early stop
                index = -1;
                break;
            }
            else index = i;
        }

    }
    if (index != -1) printf("%s\n", cars[index]);
    else printf("UNDETERMINED\n");
    return;
}
int main(){

    scanf("%d", &T);
    while(T--){
        scanf("%d", &D);

        for(int i=0; i<D; ++i){
            scanf("%s %d %d", cars[i], &L[i], &H[i]);
        }

        scanf("%d", &Q);

        while(Q--){
            scanf("%d", &P);
            check_db();
            
        }
        if(T != 0) printf("\n");

    }
    return 0;
}

