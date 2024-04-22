/***************************************************
  > Copyright (C) 2024 ==YJD== All rights reserved.
  > File Name: add_dr.c
  > Author: YJD
  > Mail:yjdsnr@163.com 
  > Created Time: 2024年04月11日 星期四 16时04分09秒
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
#include"new_doctor.h"//添加新医生
#include"new_manager.h"//新行政人员注册
#include"write_cases.h"//写病历
#include"add_manager.h"//添加行政人员*/
#include"structre.h"
#include"errno.h"
struct doctors* new_doctor(void)
{

	struct doctors *head =NULL;
	struct doctors *tail =NULL;
	struct doctors *p = NULL;
	struct doctors  temp;
	int i = 0;


	head = malloc(sizeof(struct doctors));

	tail = head;
	printf("请输入您的姓名，输入quit结束本次信息录入\n");
	scanf("%s",temp.dr.name);

	if(strcmp(temp.dr.name,"quit") !=0)
	{

		printf("请输入您的科室\n");
		scanf("%s",temp.dr.department);
		for(i = 0;strcmp(temp.dr.name,"quit") != 0;i++)
		{
			p = malloc(sizeof(struct doctors));
			*p = temp;

			printf("请输入您的姓名，输入quit结束本次信息录入\n");
			scanf("%s",temp.dr.name);
			printf("请输入您的科室\n");
			scanf("%s",temp.dr.department);

			p = tail->next;
			tail = p;
		}
	}
	tail->next = NULL;

	return head;
	
}
void outputdr(struct doctors *head)
{
	struct doctors *p = NULL;   
	p = head->next;
	while(p != NULL)
	{	printf("感谢您的注册%s医生,您的科室是%s,稍后前往行政部门领取您的工号和工卡\n",p->dr.name,p->dr.department);
		p = p->next;
	}

	}
