/***************************************************
> Copyright (C) 2024 ==YJD== All rights reserved.
> File Name: del_dr.c
> Author: YJD
> Mail:yjdsnr@163.com 
> Created Time: 2024年04月11日 星期四 16时04分58秒
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
#include"structre.h"
void deleteDoctor(struct doctors* head)
 {  
    char leave[50];
    struct doctors*p = NULL;
    struct doctors*q= NULL;
    printf("请输入离职医生的姓名\n");
    scanf("%s",leave);
    q = head;
    p = head->next;
    while(p != NULL)
	{
		q = p;
		p = p->next;
		if(strcmp(p->dr.name,leave) == 0)
	{
		q->next = p->next;
		free(p);
	}
	}
  }
