#include <stdio.h>

void main()
{
	int i,j,k;
	int m,n,p;
	int s;


	i=8;
	j=10;
	k=12;

	m=++i;
	printf("i = %d\n",i );
	printf("m = %d\n",m );

	n=j--;  /*  n等于j初始值，j减少了   */
	printf("j = %d\n",j );
	printf("n = %d\n",n );

    s=n++;
    printf("s = %d\n",s );

    printf("n = %d\n",n );
	p=(++m) * s + (--k); //m=10;n=11;         ====> n增加了，但是n++这个整体暂时没有变。

	printf("k = %d\n",k );
	printf("p = %d\n",p );

}