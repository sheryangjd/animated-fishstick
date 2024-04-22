#include"stdio.h"
#include"string.h"
#include"time.h"
#include"stdlib.h"
char* mtime(void)
{
	char mytime[20];
	time_t temp = 0;
	time(&temp);
	struct tm*p =localtime(&temp);
	sprintf(mytime,"%d-%d-%d",p->tm_year + 1900,p->tm_mon+1,p->tm_mday);
	return mytime;
	
}
