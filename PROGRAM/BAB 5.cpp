#include <iostream>
#include <stdio.h> 
#include <stdlib.h>
#define MAX 3
using namespace std; 
void push(int stack[],int *top,int value);
void pop(int stack[],int *top,int *value); 
int main()
{
	int stack[MAX];
	int top = -1;
	int n, value;
	do
	{
		do
		{
			cout<<"Masukkan Nilai yang akan di Push :";
			cin>>value;
			push(stack,&top,value);
			cout<<"Tekan 1 untuk melanjutkan Push, 2 untuk Pop"<<endl;
			cin>>n;
		} while (n == 1);
		cout<<"Tekan 2 untuk Melakukan Pop"<<endl;
		cin>>n;
		while (n == 2)
		{
			pop(stack,&top,&value);
			cout<<"Nilai yang di Pop :"<<value<<endl;
			cout<<"Tekan 2 untuk Pop sebuah Elemen, 1 untuk push"<<endl;
			cin>>n;
		}
		cout<<endl;
		cout<<"Tekan 2 untuk Pop sebuah Elemen, 1 untuk push"<<endl; 
		cin>>n;
	}while (n == 1);
}
void push(int stack[], int *top, int value)//fungsi untuk insert nilai
{
	if(*top < MAX)
	{
		*top = *top + 1; 
		stack[*top] = value; 
	}
	else
	{
		cout<<"Stack Penuh, Push nilai tidak dapat dilakukan"<<endl;
		exit(0);
	}
}

void pop(int stack[],int *top,int *value)//fungsi untuk insert nilai
{
if(*top >= 0)
{
	*value = stack[*top];
	*top = *top - 1;
}
else
{
	cout<<"Stack Kosong, Pop Tidak dapat dilakukan!"<<endl;
	exit(0);
}
}
	
	
