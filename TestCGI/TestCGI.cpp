// TestCGI.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>

int main(int args ,char* argv[])
{
	printf("Content-type:text/html\n\n");
	printf("<div>Hello World! 我是 CGI<div>");

	printf("<div style=\"margin-top:20px;\">传入的命令行参数：<div>");
	printf("<ul>");
	for (int i = 0;i < args;i++)
	{
		printf("<li>");
		printf(argv[i]);
		printf("</li>");
	}
	printf("</ul>");

	getchar();

    return 0;
}

