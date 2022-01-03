#include <stdio.h>
#include <string.h>

int n,mflag,f_flag;
char name[15],id[15],gender[2];
char mname[15],f_name[15],mid[15],f_id[15];
int grade,mlow,f_high;
// char male[2]="M",female[2]="F";

int main(){
	scanf("%d",&n);
	mflag=0,f_flag=0;
	mlow=2147483647;f_high=0;
	while(n--){
		scanf("%s%s%s%d",name,gender,id,&grade);
		if(strcmp(gender,"M")==0&&grade<mlow){
			mflag=1;
			mlow=grade;
			strcpy(mname,name);
			strcpy(mid,id);
		}else if(strcmp(gender,"F")==0&&grade>f_high){
			f_flag=1;
			f_high=grade;
			strcpy(f_name,name);
			strcpy(f_id,id);
		}
	}
	if(!f_flag) printf("Absent\n");
	else printf("%s %s\n",f_name,f_id);
	if(!mflag) printf("Absent\n");
	else printf("%s %s\n",mname,mid);
	if(!f_flag||!mflag) printf("NA\n");
	else printf("%d",f_high-mlow);
	return 0;
}

