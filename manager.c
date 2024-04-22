/***************************************************
> Copyright (C) 2024 ==YJD== All rights reserved.
> File Name: manager.c
> Author: YJD
> Mail:yjdsnr@163.com 
> Created Time: 2024年04月11日 星期四 15时38分37秒
***************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include"add_dr.h"//新医生注册
#include"add_patient.h"//添加病号
#include"call_patient.h"//叫号
#include"doctor_load.h"//医生登录
#include"manager.h"//行政人员登录
#include"new_doctor.h"//新医生注册
#include"new_manager.h"//新行政人员注册
#include"write_cases.h"//写病历

void managerload(void)

{   struct doctors* head =NULL;
	struct managers*h =NULL;
  
   
	while(1){
	
	printf("请刷卡\n");
	char note[5];
	scanf("%s",note);
	if (strcmp(note,"67890") != 0)
	{
		printf("请输入您的选项；1.添加医生信息。2.删除离职医生。3.添加行政人员信息\n");
		int num;
		scanf("%d",&num);
		switch (num) {
			case 1: head = readdr();
					adddr(head);
					writedr(head);
				break;
			case 2:  
				head = readdr();
			    deleteDoctor(head);
				writedr(head);
				break;
			case 3:
				h = readman();
				addmanager(h);
				writeman(h);

		}
	}

}}
