#include<stdio.h>
int main(){
	double a;//scanf("a=%d",&a);
	
	int b=32,c=1.2; 
	a=10.0/3;//用%f 输出  小数点后面输出显示最多6位  3.333333 
	
	printf("a的值:%3.1f\n",a);//  %m.nf   m 输出 占数据m列   n输出  小数点后面保留n位 
	//输出是 3.3 三位 保留一位
	printf("a的值:%-25.15f,a的值为:%25.15f\n",a,a); //第一次输出是左边靠   右端有5列
	//%-m,nf	%m.nf 的区别										  //第二次输出是右边靠   左端有5个空格 
	printf("%e\n",123.456);
	//前面有4个空格 小数点后面保留两位 
	printf("%13.2e\n",123.456); 
	
	printf("%o\n",b);//八进制输出 
	printf("%x\n",b); //十六进制输出 
	
	printf("%e, %E",c,c);
	
	
	
	
	return 0;
	
}








 
