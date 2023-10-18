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
printf("No");
break;
}

}

if ( c == n ){

printf("Yes");



}
if(n<2)
printf("No");
return 0;
}

