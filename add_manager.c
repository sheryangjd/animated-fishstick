#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include"add_dr.h"//��ҽ��ע��
#include"add_patient.h"//��Ӳ���
#include"call_patient.h"//�к�
#include"del_dr.h"//ɾ��ҽ��
#include"del_patient.h"//ɾ������
#include"doctor_load.h"//ҽ����¼
#include"find_patient.h"//���Ҳ�����Ϣ
#include"manager.h"//������Ա��¼
#include"new_doctor.h"//��ҽ��ע��
#include"new_manager.h"//��������Աע��
#include"write_cases.h"//д����
#include"add_manager.h"//���������Ա
#include"structre.h"
void addmanager(struct managers*head)

	{
		struct managers*p =NULL;
		p = head;
	    while(p !=NULL)
		{
		printf("������������Ա����\n");
		scanf("%s",p->admin.number);
		p = p->next;
		}
}
