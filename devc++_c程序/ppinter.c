#include<stdio.h>
int main(){
	int number=5;//定义了一个变量
	//初始化声明的时候的星号*吗，仅仅是声明，并不作为间接运算符 
	int *p=&number;
	printf("number's value=[%d]\n",number);
	printf("p 指向变量的值:%d\n",*p);
	*p=80; //可以通过修改指针所指向的变量的值
	printf("number's address=[%p]\n",&number);
	printf("number's value=[%d]\n",number);
	printf("p'adress:%p\n",&p); //指针的地址 
	printf("p'value:%p\n",p);//指针的值
	
	printf("p 指向变量的值:%d\n",*p);//指针p指向变量的值 
	//指针的作用就是  构造数据结构 
	
	
	
	return 0; 
}
