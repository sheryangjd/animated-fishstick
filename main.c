/***************************************************
  > Copyright (C) 2024 ==YJD== All rights reserved.
  > File Name: main.c
  > Author: YJD
  > Mail:yjdsnr@163.com 
  > Created Time: 2024年04月11日 星期四 15时33分35秒
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
#include"new_doctor.h"//新医生注册*/
#include"new_manager.h"//新行政人员注册
#include"write_cases.h"//写病历
#include"structre.h"
#include"add_manager.h"



int main(int argc,const char* argv[])
{
  struct doctors*p =NULL;
  struct managers*q = NULL;
	while(1){
		printf("******************************\n");
		printf("请输入您的选项\n");
		printf("1.我是医生，我要登录系统\n");
		printf("2.我是新人，我要注册医生账号\n");
		printf("3.我是行政人员，我要登录管理系统\n");
		printf("4.我是新人，我要注册行政人员账号\n");
		printf("5.退出系统\n");
		printf("******************************\n");
		int num = 0;
		scanf("%d",&num);
		switch(num){
			case 1: drload() /*printf("1\n")*/;

					 break;

			case 2:p = new_doctor()/*printf("2\n")*/;
				   outputdr(p);
				   writedr(p);
				   printf("欢迎加入第一医院\n");
					break;

			case 3: managerload()/*printf("3\n")*/;
					break;
			case 4: q =new_manager()/*;printf("4\n")*/;
			        output_new_manager(q);
			        writeman(q);
					break;
			case 5: return 0;
			
			
		}
	}
}
