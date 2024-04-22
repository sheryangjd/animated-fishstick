/***************************************************
> Copyright (C) 2024 ==YJD== All rights reserved.
> File Name: readandwriteman.c
> Author: YJD
> Mail:yjdsnr@163.com 
> Created Time: 2024年04月18日 星期四 19时10分59秒
***************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include"structre.h"
void writeman(struct managers*head)
{
	FILE* fp= fopen("manager.dat","wb+");
	if(fp == NULL)
	{
		perror("fopen");
		return -1;
	}
struct managers *p = head;
while(p != NULL)
{
	fwrite(p,sizeof(struct managers),1,fp);
	p = p->next;
}
    fclose(fp);
}
/*struct doctors{
doctor dr;
struct doctors*next;
};
*/
struct managers* readman(void)
 {  
    FILE* fp = fopen("manager.dat", "rb");  
    if (fp == NULL) {  
        perror("Failed to open file for reading");  
        return -1;  
    }  
  
    struct managers* head = NULL;  
    struct managers* tail = NULL;  
   
  struct managers *p = malloc(sizeof(struct managers));
    while (fread(p,sizeof(struct managers),1,fp) == 1) {  
        p->next =NULL; 
        if (head == NULL) {  
            head = p;  
            tail = p;  
        } else {  
            tail->next = p;  
            tail = p;  
        }  
         p = malloc(sizeof(struct managers));
    }  
  
    fclose(fp);  
    return head;  
} 
