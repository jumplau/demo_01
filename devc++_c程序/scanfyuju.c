#include<stdio.h>

int main(){
	
//	int a,b,c;
//	scanf("a=%d,b=%d,c=%d",&a,&b,&c);//格式控制后面是变量地址  不是变量名
//	printf("a=%d,b=%d,c=%d",a,b,c); //要在scanf语句中输入 控制字符串里面要有相同的值   应该输入a=1,b=5,c=5 
	
	
	//用putchar来输出字符   写 
	
	char i='B',j='o',k='y';
	putchar(i);
	putchar(j);
	putchar(k);
	putchar('\n');
	
	
	//用getchar 来输入字符   读 
	char n,p,q;
	n=getchar(); p=getchar();q=getchar(); 
	  putchar(n);  putchar(p); putchar(q);
	  
	//用printf函数来输出刚刚输入的字符
	printf("%c",getchar());  
	return 0;
}

