#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include"add_dr.h"
#include"add_patient.h"
#include"call_patient.h"
#include"del_dr.h"//删除医生
#include"del_patient.h"//删除病号
#include"doctor_load.h"//医生登录
#include"find_patient.h"//查找病号信息
#include"manager.h"//行政人员登录
#include"new_doctor.h"//添加新医生
#include"new_manager.h"//新行政人员注册
#include"write_cases.h"//写病历
#include"add_manager.h"//添加行政人员
#include"structre.h"

void  adddr(struct doctors* head)
{
	struct doctors *p =NULL;
	p = head->next;
    while(p !=NULL){
	printf("请输入医生工号\n");
	scanf("%s",p->dr.worknum);
	printf("请输入医生等级\n");
	scanf("%d",&p->dr.grade);
	p = p->next;
	}}
	
