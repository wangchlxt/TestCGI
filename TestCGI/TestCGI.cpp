// TestCGI.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#pragma warning(disable:4996)

int main(int args ,char* argv[])
{
	// 普通输出
	printf("Content-type:text/html\n\n");
	printf("<div>Hello World! 我是 CGI<div>");

	// 输出参数
	printf("<div style=\"margin-top:20px;\">传入的命令行参数：<div>");
	printf("<ul>");
	for (int i = 0;i < args;i++)
	{
		printf("<li>");
		printf(argv[i]);
		printf("</li>");
	}
	printf("</ul>");

	// 输出系统环境变量 Path
	printf("<div>getenv(\"path\"); -- Path 系统环境变量：</div>");
	printf("<div>");
	printf(getenv("path"));
	printf("</div>");

	getchar();

    return 0;
}

