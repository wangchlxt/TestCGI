// TestCGI.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>
#pragma warning(disable:4996)

int main(int args ,char* argv[])
{
	// ��ͨ���
	printf("Content-type:text/html\n\n");
	printf("<title>TestCGI</title>");
	printf("<meta charset=\"gbk\"/>");
	printf("<meta name=\"keywords\" content=\"cgi\" />");
	printf("<meta name=\"description\" content=\"cgi test\" />");
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
	printf("<div style=\"margin-top:20px;\">getenv(\"path\"); -- Path ϵͳ����������</div>");
	printf("<div>");
	printf(getenv("path"));
	printf("</div>");

	// ���ϵͳ��������	QUERY_STRING
	// ʵ����http://localhost:8088/cgi-bin/TestCGI?abc=def&def=aj&k=�й�  getenv("QUERY_STRING") ���� abc=def&def=aj&k=%E4%B8%AD%E5%9B%BD
	printf("<div style=\"margin-top:20px;\">getenv(\"QUERY_STRING\"); -- QUERY_STRING ϵͳ����������</div>");
	char* content = " ";
	content = getenv("QUERY_STRING");
	fprintf(stdout, "<div>%s</div>", content);

	printf("<img src=\"https://article-fd.zol-img.com.cn/t_s1280x720/g5/M00/02/0F/ChMkJ1qbj2mIFF-bAAM_PnqWJ7QAAlGmwG68wEAAz9W133.jpg\" width=\"300px\" height=\"200px\"/>");
	printf("<img src=\"11271f30e924b899614a5c1762061d950a7bf64e.jpg\" width=\"300px\" height=\"200px\"/>");
	printf("<img src=\"http://img1.dayoo.com/photo/attachement/jpg/site1/20140407/001372af568314ac46380b.jpg\" width=\"300px\" height=\"200px\"/>");

	getchar();

    return 0;
}

