// TestCGI.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>

int main(int args ,char* argv[])
{
	printf("Content-type:text/html\n\n");
	printf("<div>Hello World! ���� CGI<div>");

	printf("<div style=\"margin-top:20px;\">����������в�����<div>");
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

