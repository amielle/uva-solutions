#include <stdio.h>

int C, n, d, k;

long long c[25];
long long bm;

long long pow(long long x, int y){
    if(!y) return 1;
    if(y&1) return x*pow(x*x, y/2);
    else return pow(x*x, y/2);
}
int main(){

    scanf("%d", &C);

    while(C--){
        int counter = 0;
        scanf("%d", &n);
        for(int i=0; i<=n; ++i){
            scanf("%lld", &c[i]);
        }
        scanf("%d %d", &d, &k);

        long long x = 1;
        long long ans = 0;
        long long curr = 0;

        while(curr < k){
            curr += x*d;
            if(k <= curr){
                ans = 0;
                for(int i=0; i<=n; ++i)
                    ans += c[i] * pow(x, i);
            }
            ++x;
        }
        printf("%lld\n", ans);

    }

    return 0;
}