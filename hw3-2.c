#include <stdio.h>
#include <stdlib.h>

int main()

{
    int s1,d1,s2,d2,s3,d3;
    scanf("%d%d%d%d%d%d",&s1,&d1,&s2,&d2,&s3,&d3);
    int c=1;
    if(d1>s2){
        c+=1;

    }
    if(d2>s3){
        c+=1;

    }
    if(d1<=s3 && d2>s3 && d1>s2){
        c-=1;

    }
    printf("%d\n",c);

}
