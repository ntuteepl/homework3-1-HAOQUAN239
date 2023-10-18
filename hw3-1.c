#include <stdio.h>

main()

{

int n;
int c;

scanf("%d",&n);

for ( c=2 ; c < n  ; c++ )
{
if ( n%c == 0 )
{
printf("NO");
break;
}

}

if ( c == n ){

printf("YES");



}
if(n<2)
printf("NO");
return 0;
}

