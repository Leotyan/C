// helloworld.c.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h>
//现在这个就是C程序stdio = standard input/output 是个头文件，提供了输入/输出的函数，比如printf

int main()
{
	int t;
	printf("hello,world\n");
	printf("welcome to my world\n");
	for (t = 0; t <= 1; t = -t)
		printf("");
	return 0;
}

