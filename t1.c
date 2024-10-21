#include<stdio.h>
#include<stdlib.h>
int WeiShu(long long int x) {
	long long int i = 1,Num=0;
	int j=10;
	if (x==0) {
		return 0;
	}
	while(1){
		Num = x /j % 10;
		//printf("Num=%lld\n", Num);
		if (Num >= 1) {
			i++;
			//printf("i=%lld\n", i);
		}
		else
		{
			break;
		}
		j = j * 10;
	}
	return i;
}
int main() {
	long long int x;
	while (scanf("%lld",&x)) {
		if (x == 0) {
			exit(0);
		}
		if (x == 1) {
			printf(0);
		}
		else
		{
			long long int ResNum = 17 * WeiShu(x) * WeiShu(x) / 3 - 22 * WeiShu(x) / 3 + 5 / 3;
			printf("%lld\n",ResNum);
		}
	}
}