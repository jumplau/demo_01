#include<stdio.h>

int max(int,int);//函数申明 
int min(int,int);

int main(){
	int (*p)(int,int);
	int a,b,c,n;
	
	printf("请输入a和b");
	scanf("%d,%d",&a,&b);
	
	printf("请选择1或2的模式:");
	scanf("%d",&n);
	if(n==1) p=max;//指针变量p指向函数max 
	else if(n==2)	p=min;//指针变量p指向函数min
	c=(*p)(a,b); //调用p所指向的函数
	printf("a=%d,b=%d\n",a,b);
	if(n==1) printf("max=%d\n",c);
	else  printf("min=%d\n",c);
	return 0;
} 

int max(int x,int y){
	int z;.
	if(x>y) z=x;else z=y;
	return (z);
}

int min(int x,int y){
	int z;
	if(x<y) z=x;else z=y;
	return (z);
}





