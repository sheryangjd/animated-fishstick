/***************************************************
> Copyright (C) 2024 ==YJD== All rights reserved.
> File Name: find_patient.c
> Author: YJD
> Mail:yjdsnr@163.com 
> Created Time: 2024年04月11日 星期四 15时58分48秒
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

void find(struct patients* head)
{ struct patients*p =NULL;
  struct patients*q =NULL;
  printf("请输入患者姓名\n");
  char pat[30];
  scanf("%s",pat);
  p = head->next;
  while(p != NULL)
  {
  	if(strcmp(pat,p->suffer.name) == 0)
	  {
	  	printf("%s患者，性别%s，年龄%d，病历号%s，入院时间%s\n",p->suffer.name,p->suffer.sex,p->suffer.age,p->suffer.case_no,p->suffer.time);
	  } 
	else{printf("未找到该病号");}
  }


}
