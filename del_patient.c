/***************************************************
> Copyright (C) 2024 ==YJD== All rights reserved.
> File Name: del_patient.c
> Author: YJD
> Mail:yjdsnr@163.com 
> Created Time: 2024年04月11日 星期四 15时56分35秒
***************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include"structre.h"
void deletepatient(struct patients* head)
 {  
    char leave[50];
    struct patients*p = NULL;
    struct patients*q= NULL;
    printf("请输入患者的姓名\n");
    scanf("%s",leave);
    q = head;
    p = head->next;
    while(p != NULL)
	{
		q = p;
		p = p->next;
		if(strcmp(p->suffer.name,leave) == 0)
	{
		q->next = p->next;
		free(p);
	}
	}
  }
