// TestCGI.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>
#pragma warning(disable:4996)

int main(int args ,char* argv[])
{
	// ��ͨ���
	printf("Content-type:text/html\n\n");
	printf("<div>Hello World! ���� CGI<div>");

	// �������
	printf("<div style=\"margin-top:20px;\">����������в�����<div>");
	printf("<ul>");
	for (int i = 0;i < args;i++)
	{
		printf("<li>");
		printf(argv[i]);
		printf("</li>");
	}
	printf("</ul>");

	// ���ϵͳ�������� Path
	printf("<div>getenv(\"path\"); -- Path ϵͳ����������</div>");
	printf("<div>");
	printf(getenv("path"));
	printf("</div>");

	getchar();

    return 0;
}

