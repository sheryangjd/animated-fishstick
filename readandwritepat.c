/***************************************************
> Copyright (C) 2024 ==YJD== All rights reserved.
> File Name: readandwritepat.c
> Author: YJD
> Mail:yjdsnr@163.com 
> Created Time: 2024年04月18日 星期四 19时11分59秒
***************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include"structre.h"
void writepatient(struct patients*head)
{
	FILE* fp= fopen("patient.dat","wb+");
	if(fp == NULL)
	{
		perror("fopen");
		return -1;
	}
struct patients *p = head;
while(p != NULL)
{
	fwrite(p,sizeof(struct patients),1,fp);
	p = p->next;
}
    fclose(fp);
}
/*struct doctors{
doctor dr;
struct doctors*next;
};
*/
struct patients* readpatient(void)
 {  
    FILE* fp = fopen("patient.dat", "rb");  
    if (fp == NULL) {  
        perror("Failed to open file for reading");  
        return -1;  
    }  
  
    struct patients* head = NULL;  
    struct patients* tail = NULL;  
   
  struct patients *p = malloc(sizeof(struct patients));
    while (fread(p,sizeof(struct patients),1,fp) == 1) {  
        p->next =NULL; 
        if (head == NULL) {  
            head = p;  
            tail = p;  
        } else {  
            tail->next = p;  
            tail = p;  
        }  
         p = malloc(sizeof(struct patients));
    }  
  
    fclose(fp);  
    return head;  
} 
