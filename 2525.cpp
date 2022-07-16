#include <stdio.h>

int main(){
	
/*	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<(n-1-i);j++){
			printf(" ");
		}
		for(int k=0;k<2*(i+1)-1;k++){
			printf("*");
		}
		printf("\n");
	}
*/

	int min,hour,time;
	scanf("%d %d",&hour,&min);
	scanf("%d",&time);
	
	hour += time / 60;
	min += time % 60;
	
	if(min>=60){
		min -= 60;
		hour += 1;
	} 
	if(hour>=24){
		hour -= 24;
	}
	
	printf("%d %d",hour,min);










	
	return 0;
}
