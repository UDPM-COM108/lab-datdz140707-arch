#include <stdio.h>
#include<math.h>
#include <stdlib.h>
int main(){
  int choice;
  printf("1.tinh trung binh tong\n");
  printf("2.xac dinh so nguyen to\n");
  printf("3.xac dinh so chinh phuong\n");
   printf("4.thoat!!!\n");
  printf("Nhap vao lua chon cua ban:");
  scanf("%d", &choice);
  do{
    switch(choice){
    case 1:
    //TÍNH TRUNG BÌNH TỔNG CỦA CÁC SỐ TỰ NHIÊN CHIA HẾT CHO 2
    int min, max;
    printf("nhap vao min:");
    scanf("%d", &min);
    printf("nhap vao max:");
    scanf("%d", &max);
    int i = min;
    float tong=0, bienDem=0, trungBinh=0;
    while(i<=max){
        if(i%2==0){
            tong +=i;
            bienDem++;
        }
        i++;
    }
    if(bienDem==0){
    printf("khong co so chan nao khoang\n");
    } else {
    trungBinh =tong/bienDem;
    printf("trung binh cong la:%.2f\n",trungBinh);
    }
    break;

    case 2:
    //XÁC ĐỊNH SỐ NGUYÊN TỐ
   int x;
    printf("\nnhap vao x:");
    scanf("%d", &x);
    int count=0;

    for( int y=2;i<x;i++){
        if(x%y ==0){
        count++;
      }
    }
      if (count==0){
        printf("%d la so nguyen to", x);
      }else{
        printf("%d khong phai la so nguyen to\n", x);
        }
      break;

      case 3:
    //XÁC ĐỊNH SỐ CHÍNH PHƯƠNG
    int a;
     printf("\nnhap vao so a:");
     scanf("%d", &a);
     if(a<0){
     printf("%d khong phai la so chinh phuong");
     }else{
        int b = (int)sqrt(a);
            if (b*b ==a){
             printf("%d la so chinh phuong\n", a);
            }else{
             printf("%d khong phai la so chinh phuong\n", a);
            }
     }
     case 4:
     printf("thoat!!!");
     exit(0);
     default:
     printf("lua chon cua ban khong hop le vui long chon lai");
    }
  }
     while(1);
    return 0;
}