#include<stdio.h>
int main(){
	int number=5;//������һ������
	//��ʼ��������ʱ����Ǻ�*�𣬽�����������������Ϊ�������� 
	int *p=&number;
	printf("number's value=[%d]\n",number);
	printf("p ָ�������ֵ:%d\n",*p);
	*p=80; //����ͨ���޸�ָ����ָ��ı�����ֵ
	printf("number's address=[%p]\n",&number);
	printf("number's value=[%d]\n",number);
	printf("p'adress:%p\n",&p); //ָ��ĵ�ַ 
	printf("p'value:%p\n",p);//ָ���ֵ
	
	printf("p ָ�������ֵ:%d\n",*p);//ָ��pָ�������ֵ 
	//ָ������þ���  �������ݽṹ 
	
	
	
	return 0; 
}
