#include <stdio.h>
int main()
{
	float a=123456.123456;
	float b=12.56;
	float c=1000000.3;
	float d=0.000032;
	float e=3.1415000;
	printf("%.2f\n",a);
	printf("a=%e\n",a);
	printf("b=%e\n",b);
	printf("c=%e\n",c);
	printf("d=%e\n",d);
	printf("e=%e\n\n",e);
	printf("a=%g\n",a);
	printf("b=%g\n",b);
	printf("c=%g\n",c);
	printf("d=%g\n",d);
	printf("e=%g\n",e);
	printf("%s","hello world");
	return 0;
}
//%.2f 两位小数; %s 字符串输入; %e %E %g %G 关于float的科学计数法;%g %G 默认最短输出; 
