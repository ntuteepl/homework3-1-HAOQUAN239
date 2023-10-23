#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b;
scanf("%d%d",&a,&b);
if((a/1000+a%1000/100+a%100/10+a%10)>(b/1000+b%1000/100+b%100/10+b%10)){
   printf("%d\n",b);

}
else if((a/1000+a%1000/100+a%100/10+a%10)<(b/1000+b%1000/100+b%100/10+b%10)){
   printf("%d\n",a);

}

else if((a/1000+a%1000/100+a%100/10+a%10)==(b/1000+b%1000/100+b%100/10+b%10)){

    if(a>b){
    printf("%d\n",b);
    }
    else{
    printf("%d\n",a);
    }
}

}

