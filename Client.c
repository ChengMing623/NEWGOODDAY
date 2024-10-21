
/*#include <stdio.h>
#include <stdlib.h>
int main(){
	char Map[20][20] = {0};
	int N,M,T;
	int i,j;
	char aim;
	while (scanf("%d %d %d",&N,&M,&T)) {
		
		if (N == 0 && M == 0 && T == 0) {
			exit(0);
		}
		
		for (i = 0; i < N;i++) {
			for (j = 0; j < M; j++) {
				scanf("%c ", &aim);
				Map[i][j] = aim;
			}
		}

		//printf("%c", Map[0][3]);
		
		for (i = 0; i < N; i++) {
			for (j = 0; j < M; j++) {
				//if (Map[i][j] == "S")
				//printf("%d %d", i, j);
				//break;
				 printf("%c", Map[i][j]);
			}
			printf("\n");
		}
		
		
		return;

	}
}*/