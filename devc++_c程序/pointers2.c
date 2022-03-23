#include<stdio.h>
//存储指针的地址的指针是指向指针的指针
int main(){
	//本质就是在套娃
	int number=5; //声明number 并且赋值 
	int *p1=&number; //声明p1指向number 
	int **p2=&p1;//p2->p1 
	int ***p3=&p2;//p3->p2
	printf("number's address:%p\n",&number);
	printf("number's value:%d\n",number);
	printf("\n"); 
	printf("p1's address:%p\n",&p1);
	printf("p1's 存储的值:%p\n",p1);
	printf("p1 pointing value(*p1):%d\n",*p1);
	printf("\n"); 
	printf("p2's address:%p\n",&p2);
	printf("p2's 存储的值:%p\n",p2);
	printf("p2 pointing value(*p2):%d",**p2);
	
	return 0;
}
 
