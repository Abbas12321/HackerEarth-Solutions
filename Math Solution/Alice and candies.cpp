#include<stdio.h>
#include<math.h>

int main()

{

long long int n;

int nu,p=1,ans=0;

scanf("%lld",&n);

nu=sqrt(n);

while(nu--)

{

    if((n+p*p)%(2*p)==0)

    ans++;

    p++;

}

printf("%d",ans);

    return 0;

}
