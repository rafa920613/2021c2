#include <stdio.h>
char line[1000];
int main()
{
	int n=1;
	while(gets(line)){
		if(n>1) printf("\n");

		int ans[256]={};
		for(int i=0;line[i]!=0;i++){
			char c =line[i];
			ans[c]++;
		}
		for(int f=1;f<=1000;f++){
		for(int c=128;c>=32;c--){
			if(ans[c]==f) printf("%d %d\n",c, ans[c]);
		}
		}
		n++;
	}
	return 0;
}
