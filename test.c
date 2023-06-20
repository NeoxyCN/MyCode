include<stdio.h>
int main() {
	    float a[3][3];
	    int i,  j;
	    for (i  =  0;  i  <  3;  ++i) {
		        for (j  =  0;  j  <  3;  ++j) {
			            scanf("%f",  &a[i][j]);
			        }
		    }
	    float b[3][3];
	    float c[3][3];
	    for (i  =  0;  i  <=  2;  i++) {
		        for (j  =  0;  j <= 2;  j++) {
			            b[j][i]  =  a[i][j];
			        }
		        printf("以下是转置矩阵:\n");
		        for (i  =  0;  i  <=  2;  i++) {
			            for (j  =  0;  j  <=  2;  j++)
			                printf("%f",  b[i][j]);
			            printf("\n");
			        }
		        printf("以下是求和矩阵:\n");
		        for (i  =  0;  i  <=  2;  i++) {
			            for (j  =  0;  j  <=  2;  j++) {
				                printf("%f",  c[i][j]);
				                c[i][j]  =  a[i][j]  +  b[i][j];
				            }
			            printf("\n");
			        }
		        return 0;
		    }
}

