/***************************************************
> Copyright (C) 2024 ==YJD== All rights reserved.
> File Name: structre.h
> Author: YJD
> Mail:yjdsnr@163.com 
> Created Time: 2024年04月15日 星期一 19时08分53秒
***************************************************/

#ifndef _STRUCTRE_H_
#define _STRUCTRE_H_
#include"time.h"
typedef struct
{
char name[50];
int age ;
char sex[20];
char case_no[10];
char* time;
}patient;
typedef struct
{
char name[50];
int grade;
char department;
char worknum[10];
}doctor;
typedef struct
{
	char name[50];
	char number[10];

}manager;
struct doctors{
doctor dr;
struct doctors*next;
};

struct managers
{
	manager admin;
	struct managers* next;
};

struct patients
{
	patient suffer;
	struct patients*next;
};


#endif
