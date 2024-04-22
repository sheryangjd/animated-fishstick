/***************************************************
> Copyright (C) 2024 ==YJD== All rights reserved.
> File Name: add_patient.c
> Author: YJD
> Mail:yjdsnr@163.com 
> Created Time: 2024年04月11日 星期四 15时55分40秒
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
#include <time.h>  
#include"structre.h"
#include"timer.h"
  

struct patients* addpatient(void)   
{  
    struct patients *head = NULL;  
    struct patients *tail = NULL;  
    struct patients *new_patient = NULL;  
    char name[50]; // 假设患者姓名不会超过49个字符  
      
    while (1) { // 使用无限循环来持续读取输入  
        printf("请输入患者姓名,输入quit退出\n");  
        scanf("%49s", name); // 限制输入长度防止溢出  
  
        if (strcmp(name, "quit") == 0) {  
            break; // 用户输入quit，退出循环  
        }  
  
        new_patient = (struct patients*)malloc(sizeof(struct patients));  
        if (new_patient == NULL) {  
            perror("Memory allocation failed");  
            exit(EXIT_FAILURE);  
        }  
  
        printf("请输入患者年龄\n");  
        scanf("%d", &new_patient->suffer.age);  
  
        printf("请输入患者性别\n");  
        scanf("%s", new_patient->suffer.sex);  
  
        printf("请输入患者病历编号\n");  
        scanf("%s", new_patient->suffer.case_no);  
  
        new_patient->suffer.time = mtime; // 假设mtime已经正确初始化  
        new_patient->next = NULL; // 新节点的next初始化为NULL  
  
        // 将新节点添加到链表的尾部  
        if (head == NULL) {  
            head = new_patient;  
            tail = new_patient;  
        } else {  
            tail->next = new_patient;  
            tail = new_patient;  
        }  
    }  
  
    return head;  
}
}
  
  
