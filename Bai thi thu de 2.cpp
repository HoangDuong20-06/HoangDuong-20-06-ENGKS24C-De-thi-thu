#include<stdio.h>
int main(){
	int choice,m,n,temp,result;
	int a[100][100];
	do{
	    printf("MENU\n");
	    printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
	    printf("2. In ra gia tri cac phan tu cua mang theo ma tran\n");
	    printf("3. In ra cac phan tu nam tren duong bien va tinh tich\n");
	    printf("4. In ra cac phan tu nam tren duong cheo chinh\n");
	    printf("5. In ra cac phan tu nam tren duong cheo phu\n");
	    printf("6. Sap xep duong cheo chinh theo thu tu tang dan\n");
	    printf("7. Tim kiem mot phan tu va in ra vi tri cua phan tu do trong mang\n");
	    printf("8. Thoat\n");
	    printf("Lua chon cua ban: ");
	    scanf("%d",&choice);
	    switch (choice){
		    // case 1: Nhap kich co va gia tri cac phan tu cua mang
		    case 1:
			    printf("Nhap so hang cua mang: ");
			    scanf("%d",&m);
			    printf("Nhap so cot cua mang: ");
			    scanf("%d", &n);
			    printf("Nhap cac phan tu cua mang\n");
			    for(int i = 0; i < m; i++){	
				   for(int j = 0; j < n; j++){
					   printf("a[%d][%d]=", i,j);
					   scanf("%d",&a[i][j]);
				    }
			    }
			    break;
		    // case 2: In ra gia tri cac phan tu cua mang theo ma tran
		    case 2:
			for(int i = 0; i<m; i++){
				for(int j = 0; j<n; j++){
					printf("%d\t",a[i][j]);
				}
				printf("\n");
			}
			printf("\n");
			break;
			// case 3: In ra cac phan tu nam tren duong bien va tinh tich
			case 3:
				result =1;   
                printf("Cac phan tu nam tren duong bien la: \n");
                for (int i = 0; i < m; i++) {
                	for (int j = 0; j < n; j++) {
                		if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                			printf("%2d ", a[i][j]);
                            result  *= a[i][j];
                        }
                    }
                }
                printf("\nTich cac phan tu tren duong bien la: %d\n", result);
				break;
			// case 4: In ra cac phan tu nam tren duong cheo chinh
			case 4:
				printf("Cac phan tu nam tren duong cheo chinh\n");
				if(n==m){
					for(int i=0; i<n; i++){
						printf("%d ",a[i][i]);
					}
				}else {
					printf("Mang khong co duong cheo chinh");
				}
				printf("\n");
				break;
			// case 5: In ra cac phan tu nam tren duong cheo phu
			case 5:
				printf("Cac phan tu bam tren duong cheo phu\n");
				if(n==m){
					for(int i=0; i<n; i++){
						printf("%d ",a[i][n-1-i]);
					}
				}else {
					printf("Mang khong co duong cheo phu");
				}
				printf("\n");
				break;
			// case 6: Sap xep duong cheo chinh theo thu tu tang dan
			case 6:
			
			break;
			// case 7: Tim kiem mot phan tu va in ra vi tri cua phan tu do trong mang
			case 7:
				break;
			// case 8: Thoat
			case 8:
				printf("Chuong trinh ket thuc");
				break;
				default:
				printf("Lua chon khong hop le");	
			}
  } while(choice != 8);
  return 0; 
}
