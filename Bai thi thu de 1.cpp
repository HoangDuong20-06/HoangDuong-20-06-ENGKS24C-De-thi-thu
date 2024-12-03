#include<stdio.h>
int main(){
	int n,choice,max,so_nguyen_to,value,pos,x;
	int a[100];
	do{
		printf("MENU\n");
		printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
		printf("2. In ra gia tri cac phan tu dang quan ly\n");
		printf("3. In ra gia tri lon nhat cua mang\n");
		printf("4. In ra cac phan tu la so nguyen to trong mang\n");
		printf("5. Them mot phan tu vao trong mang\n");
		printf("6. Xoa mot phan tu trong mang\n");
		printf("7. Sap xep mang theo thu tu tang dan\n");
		printf("8. Tim kiem phan tu(nguoi dung nhap) va in ra vi tri index cua phan tu do\n");
		printf("9. Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d",&choice);
		switch (choice){
			// Nhap so phan tu can nhap va gia tri cac phan tu
		case 1:
			printf("Nhap kich thuoc mang: ");
			scanf("%d",&n);
			printf("Nhap cac phan tu cua mang\n");
			for(int i = 0; i < n; i++){
				printf("a[%d]=",i);
				scanf("%d", &a[i]);
			}
			break;
		// In ra gia tri cac phan tu dang quan ly
		case 2:
			for(int i = 0; i < n; i++){
				printf("%d ",a[i]);
		    }
		    printf("\n");
			break;
		// In ra gia tri lon nhat cua mang
		case 3:
			max=a[0];
			for(int i =1; i<n; i++){
				if(a[i]>max){
					max=a[i];
				}
			}
			printf("Gia tri lon nhat cua mang: %d",max);
			printf("\n");
			break;
		// In ra cac phan tu la so nguyen to trong mang
		case 4:
			printf("cac phan tu la so nguyen to trong mang la: ");
				for(int i=0;i<n;i++){
					if(a[i]<10){
						switch(a[i]){
							case 1:
							case 2:
							case 3:
							case 5:
							case 7:
								printf("%d ",a[i]);
						}
					}else if(a[i]%2!=0&&a[i]%3!=0&&a[i]%5!=0&&a[i]%7!=0){
						printf("%d ",a[i]);
					}
				}
				printf("\n");
			break;
		// Them mot phan tu vao trong mang
		case 5:
			printf("Nhap gia tri muon them: ");
                scanf("%d", &value);
                printf("Nhap vi tri muon them: ");
                scanf("%d", &pos);
                if (pos < 0 || pos > n) {
                    printf("Vi tri them khong hop le!\n");
                } else {
                    for (int i = n; i > pos; i--) {
                        a[i] = a[i - 1];
                    }
			    }
                a[pos] = value;
                n++;
			break;
		// Xoa mot phan tu trong mang
		case 6:
			printf("Nhap vi tri can xoa: ");
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("Vi tri khong hop le!\n");
                } else {	
                    for (int i = pos; i < n - 1; i++) {
                        a[i] = a[i + 1];
                    }
                }
                n--;
			break;
		// Sap xep mang theo thu tu tang dan
		case 7:
			for(int i = 0; i<n; i++){	
		    int min = a[i];
		    for(int j=i+1; j<n; j++){
			    if(a[j]<min){
				    min = a[j];
			        a[j] = a[i];
			        a[i] = min; 
			    }
		    }
	    }
	    printf("\nMang da sap xep: ");
	    for(int i= 0; i<n; i++){
		   printf("%d\t",a[i]);
	    }
	    printf("\n");
			break;
		// Tim kiem phan tu(nguoi dung nhap) va in ra vi tri index cua phan tu do
		case 8:
			printf("Nhap phan tu can tim: ");
            scanf("%d", &x);
            for (int i = 0; i < n; i++) {
                if (a[i] == x) {
                printf("Phan tu %d co tai vi tri index %d\n", x, i);
                }else{
            	printf("Khong tim thay phan tu %d trong mang",x);
			    }
            }
			break;
		// Thoat
		case 9:
			printf("Chuong trinh ket thuc");
			break;
			default:
		    printf("Lua chon khong hop le");
		}
	} while(choice!=9);
	return 0;
}
