#include <stdio.h>

void main()
{
	/*定义一个整形指针p */

	int *p;bb
	int begin,end;

	begin=10;
	/*给指针指向的值传给变量end */

	end = *p;

	printf("begin= %d\n\n",begin);
	printf("end = %d\n",end);

	/*输出指针中的地址值*/

	printf("p=%d\n",p);
	printf("*p = %d\n",*p);
}