// TestCGI.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#pragma warning(disable:4996)

int main(int args ,char* argv[])
{
	// 普通输出
	printf("Content-type:text/html\n\n");
	printf("<title>TestCGI</title>");
	printf("<meta charset=\"gbk\"/>");
	printf("<meta name=\"keywords\" content=\"cgi\" />");
	printf("<meta name=\"description\" content=\"cgi test\" />");
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
	printf("<div style=\"margin-top:20px;\">getenv(\"path\"); -- Path 系统环境变量：</div>");
	printf("<div>");
	printf(getenv("path"));
	printf("</div>");

	// 输出系统环境变量	QUERY_STRING
	// 实例：http://localhost:8088/cgi-bin/TestCGI?abc=def&def=aj&k=中国  getenv("QUERY_STRING") 返回 abc=def&def=aj&k=%E4%B8%AD%E5%9B%BD
	printf("<div style=\"margin-top:20px;\">getenv(\"QUERY_STRING\"); -- QUERY_STRING 系统环境变量：</div>");
	char* content = " ";
	content = getenv("QUERY_STRING");
	fprintf(stdout, "<div>%s</div>", content);

	printf("<img src=\"https://article-fd.zol-img.com.cn/t_s1280x720/g5/M00/02/0F/ChMkJ1qbj2mIFF-bAAM_PnqWJ7QAAlGmwG68wEAAz9W133.jpg\" width=\"300px\" height=\"200px\"/>");
	printf("<img src=\"11271f30e924b899614a5c1762061d950a7bf64e.jpg\" width=\"300px\" height=\"200px\"/>");
	printf("<img src=\"http://img1.dayoo.com/photo/attachement/jpg/site1/20140407/001372af568314ac46380b.jpg\" width=\"300px\" height=\"200px\"/>");

	getchar();

    return 0;
}

