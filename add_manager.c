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
void addmanager(struct managers*head)

	{
		struct managers*p =NULL;
		p = head;
	    while(p !=NULL)
		{
		printf("请输入行政人员工号\n");
		scanf("%s",p->admin.number);
		p = p->next;
		}
}
