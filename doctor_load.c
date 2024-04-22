/***************************************************
> Copyright (C) 2024 ==YJD== All rights reserved.
> File Name: doctor_load.c
> Author: YJD
> Mail:yjdsnr@163.com 
> Created Time: 2024年04月11日 星期四 15时35分27秒
***************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include"add_dr.h"//新医生注册
#include"add_patient.h"//添加病号
#include"call_patient.h"//叫号
#include"structre.h"
#include"doctor_load.h"//医生登录
#include"del_patient.h"
#include"manager.h"//行政人员登录
#include"new_doctor.h"//新医生注册
#include"new_manager.h"//新行政人员注册
#include"write_cases.h"//写病历
#include "find_patient.h"

void drload(void)
{
		struct patients* head = NULL;
	while(1){
	
	printf("请刷卡\n");
	char note[5];
	scanf("%s",note);
	if (strcmp(note,"12345") != 0)
	{
		printf("请输入您的选项；1.添加病人信息。2.叫号。3.删除病号。4.写病历。5.查看病号信息。\n");
		int num;
		scanf("%d",&num);
		switch (num) {
			case 1:
			 head = addpatient() ;
			 writepatient(head);
				break;
		
			case 2:
				callpatient();
				break;
			
			case 3:
			head = readpatient();
			deletepatient(head);
			writepatient(head);
				break;
			case 4:
		     	writecase();
		    case 5:
		    	head = readpatient();
		    	find(head);
		    default: return 0;
		    
		     	
		     	
			
		}
	}

	}
}
