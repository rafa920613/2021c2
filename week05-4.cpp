#include <stdio.h>
char line[1000];
int main()
{
	int r;
	scanf("%d\n\n",&r);

	for(int t=1;t<=r;t++){
		if(t>1)printf("\n");

		printf("現在讀到第%d大坨的資料\n",t);
		while(gets(line) ){
			if(line[0]==0)break;
			}
		}

}
