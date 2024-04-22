/***************************************************
> Copyright (C) 2024 ==YJD== All rights reserved.
> File Name: readandwritedr.c
> Author: YJD
> Mail:yjdsnr@163.com 
> Created Time: 2024年04月18日 星期四 19时09分01秒
***************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include"structre.h"
void writedr(struct doctors*head)
{
	FILE* fp= fopen("doctor.dat","wb+");
	if(fp == NULL)
	{
		perror("fopen");
		return -1;
	}
struct doctors *p = head;
while(p != NULL)
{
	fwrite(p,sizeof(struct doctors),1,fp);
	p = p->next;
}
    fclose(fp);
}
/*struct doctors{
doctor dr;
struct doctors*next;
};
*/
struct doctors* readdr(void)
 {  
    FILE* fp = fopen("doctor.dat", "rb");  
    if (fp == NULL) {  
        perror("Failed to open file for reading");  
        return -1;  
    }  
  
    struct doctors* head = NULL;  
    struct doctors* tail = NULL;  
   
  struct doctors* p = malloc(sizeof(struct doctors));
    while (fread(p,sizeof(struct doctors),1,fp) == 1) {  
        p->next =NULL; 
        if (head == NULL) {  
            head = p;  
            tail = p;  
        } else {  
            tail->next = p;  
            tail = p;  
        }  
         p = malloc(sizeof(struct doctors));
    }  
  
    fclose(fp);  
    return head;  
} 
