#include<cstdio>
#include<iostream>
#include<math.h>
int main()
{
    int t;
    double a,b,c,d,s,max_area;
    scanf("%d",&t);
    while(t--){
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
        s=(a+b+c+d)/2.0;
        max_area=sqrt(((s-a)*(s-b)*(s-c)*(s-d)));
        printf("%0.2lf\n",max_area);
    }
    return 0;
}
