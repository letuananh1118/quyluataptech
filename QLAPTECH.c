#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int tongbuoi,sobuoinghi;
	int lt,th,btl;
	int diemlt,diemth,diembtl;
	printf("So buoi nghi,tongsobuoi :");
	scanf("%d%d",&sobuoinghi,&tongbuoi);
	if(sobuoinghi>=25%tongbuoi)
	{
	 printf("hoclai");
	 }
	 else{
       printf("Du dieu kien");
	   printf("diem lt");
	   scanf("%d",&lt);
	if(diemlt>=0.4*20)
	  printf("da qua");
	else printf("thi lai");
	   printf("diemth");
	   scanf("%d",&th);
	if(diemth>=0.4*15)
	  printf("do");
	else printf("hoc lai");
	printf("diem btl");
	scanf("%d",&btl);
	if(diembtl>=0.4*10)
	  printf("ban da do");
	else printf("HL");
}
	return 0;
}
