#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include"add_dr.h"
#include"add_patient.h"
#include"call_patient.h"
#include"del_dr.h"//ɾ��ҽ��
#include"del_patient.h"//ɾ������
#include"doctor_load.h"//ҽ����¼
#include"find_patient.h"//���Ҳ�����Ϣ
#include"manager.h"//������Ա��¼
#include"new_doctor.h"//�����ҽ��
#include"new_manager.h"//��������Աע��
#include"write_cases.h"//д����
#include"add_manager.h"//���������Ա
#include"structre.h"

void  adddr(struct doctors* head)
{
	struct doctors *p =NULL;
	p = head->next;
    while(p !=NULL){
	printf("������ҽ������\n");
	scanf("%s",p->dr.worknum);
	printf("������ҽ���ȼ�\n");
	scanf("%d",&p->dr.grade);
	p = p->next;
	}}
	
