/***************************************************
> Copyright (C) 2024 ==YJD== All rights reserved.
> File Name: write_cases.c
> Author: YJD
> Mail:yjdsnr@163.com 
> Created Time: 2024年04月11日 星期四 16时00分49秒
***************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include"add_dr.h"//新医生注册
#include"add_patient.h"//添加病号
#include"call_patient.h"//叫号
#include"del_dr.h"//删除医生
#include"del_patient.h"//删除病号
#include"doctor_load.h"//医生登录
#include"find_patient.h"//查找病号信息
#include"manager.h"//行政人员登录
#include"new_doctor.h"//新医生注册
#include"new_manager.h"//新行政人员注册
#include"write_cases.h"//写病历
#include"add_manager.h"//添加行政人员

void writecase(void)
{
	   /* FILE*fp=NULL;//定义文件指针，初始为空 
	    char filename[25];//字符数组，存储字符，容量25 
	    char ch;//字符变量，记录字符 
	    printf("请输入文件名称：");//信息提示 
	    gets(filename);//获取文件名 
	    //判断文件创建是否成功 
	    if((fp=fopen(filename,"w"))==NULL){
	        printf("打开文件失败!\n");
	        exit(0);
	    }
	    printf("请输入病历，以#结束：\n");
	    getchar();
	    while((ch=getchar())!='#')
		{
	        fputc(ch,fp);//字符写入文件中 
	    }
	    fclose(fp);//关闭文件 */

		  
		// 定义缓冲区大小，可以根据需要调整  
		#define BUFFER_SIZE 2048
		  
		// 子函数，用于打开cases.txt文件并从键盘输入字符串写入文件  
		 
		    char buffer[BUFFER_SIZE];  
		    FILE *file;  
		  
		    // 打开文件，如果文件不存在则创建，'w'模式表示写入模式，会覆盖已有内容  
		    file = fopen("cases.txt", "w");  
		    if (file == NULL) {  
		        // 如果文件打开失败，输出错误信息并退出程序  
		        perror("Error opening file");  
		        exit(EXIT_FAILURE);  
		    }  
		  
		    printf("请输入病历（按Enter结束输入）：\n");  
		  
		    // 循环读取用户输入的每一行，直到遇到EOF（文件结束标志）  
		    while (fgets(buffer, BUFFER_SIZE, stdin) != NULL) {  
		        // 去除换行符（如果有的话）  
		        buffer[strcspn(buffer, "\n")] = 0;  
		          
		        // 将字符串写入文件  
		        fputs(buffer, file);  
		          
		        // 如果需要，可以在每行之间添加换行符  
		        fputs("\n", file);  
		    }  
		  
		    // 关闭文件  
		    fclose(file);  
		    printf("病历已输入完成\n");  
		}  
		  

