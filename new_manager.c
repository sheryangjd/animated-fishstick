/***************************************************
> Copyright (C) 2024 ==YJD== All rights reserved.
> File Name: new_manager.c
> Author: YJD
> Mail:yjdsnr@163.com 
> Created Time: 2024年04月11日 星期四 15时39分31秒
***************************************************/

#include <stdio.h>/*链表名newadmin，结构体名new_admin，函数名new_manager,output_new_manager*/
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
#include"new_doctor.h"//新医生注册*/
#include"new_manager.h"//新行政人员注册
#include"write_cases.h"//写病历
#include"add_manager.h"//添加行政人员*/
#include"structre.h"


struct managers* new_manager(void)
{
		
		struct managers *head =NULL;
		struct managers*tail =NULL;
		struct managers*p = NULL;
		struct managers temp;
		int i = 0;
		head = malloc(sizeof(struct managers));
			tail = head;
			printf("请输入您的姓名，输入quit结束本次信息录入\n");
			scanf("%s",temp.admin.name);
		
			if(strcmp(temp.admin.name,"quit") !=0)
			{
		
				for(i = 0;strcmp(temp.admin.name,"quit") != 0;i++)
				{
					p = malloc(sizeof(struct managers));
					*p = temp;
		
					printf("请输入您的姓名，输入quit结束本次信息录入\n");
					scanf("%s",temp.admin.name);
					p = tail->next;
					tail = p;
				}
			}
			tail->next = NULL;
			p = head->next;

			return head;
		}
		
void output_new_manager(struct managers *head)
{
    struct managers*p = NULL;
	p = head->next;

	while(p != NULL)
	{	printf("感谢您的注册%s行政员,稍后前往行政部门领取您的工号和工卡\n",p->admin.name);
		p = p->next;
	}
	}

