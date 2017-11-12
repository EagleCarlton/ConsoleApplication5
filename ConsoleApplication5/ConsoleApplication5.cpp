// ConsoleApplication5.cpp : 定义控制台应用程序的入口点。
//删除数组中的重复数据

#include "stdafx.h"
#include "stdio.h"
void purge_array(int p[], int* np);
void display_array(const int p[], int n);
int main()
{
	int a[10], i, size;
	printf("input 10 integers:\n");
	for (i = 0; i < 10; ++i)
		scanf_s("%d", &a[i]);
	size = 10;
	purge_array(a, &size);
	display_array(a, size);
    return 0;
}
void purge_array(int p[], int* np)
{
	int i, j, k;
	for (i = 0; i < *np - 1; ++i)
	{
		j = i + 1;
		while (j < *np)
			if (p[j] == p[i])
			{
				for (k = j + 1; k < *np; ++k)
					p[k - 1] = p[k];
				(*np)--;
			}
			else
				++j;
	}
}
void display_array(const int p[], int n)
{
	int i;
	for (i = 0; i < n; ++i)
		printf("%d\t", p[i]);
	printf("\n");
}

