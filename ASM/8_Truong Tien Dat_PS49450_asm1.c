#include<stdio.h>
#include<stdlib.h>
int main(){
    do{
      printf("\n===MENU===\n");
      int choice;
         printf("1.kiem tra so nguyen\n");
         printf("2.tim uoc so chung va boi so chung cua 2 so nguyen\n");
         printf("3.tinh tien cho quan karaoke\n");
         printf("4.tinh tien dien\n");
         printf("5.chuc nang doi tien\n");
         printf("6.tinh lay suat vay ngan hang vay tra gop\n");
         printf("7.vay tien mua xe\n");
         printf("8.sap xep thong tin sinh vien\n");
         printf("9.xay dung game FPOLY-LOTT \n");
         printf("10.tinh toan phan so\n");
         printf("11.thoat!!!\n");
         printf("Nhập lựa chọn của bạn:");
         scanf("%d", &choice);
         switch(choice){
            case 1:
            printf("1.kiem tra so nguyen\n");
            break;
            case 2:
            printf("2.tim uoc so chung va boi so chung cua 2 so nguyen\n");
            break;
            case 3:
            printf("tinh tien cho quan karaoke\n");
            break;
            case 4:
            printf("4.tinh tien dien\n");
            break;
            case 5:
            printf("5.chuc nang doi tien\n");
            break;
            case 6:
            printf("6.tinh lay suat ngan hang vay tra gop\n");
            break;
            case 7:
            printf("7.vay tien mua xe\n");
            break;
            case 8:
            printf("8.xap sep thong tin sinh vien\n");
            break;
            case 9:
            printf("9.xay dung game FPOLY-LOTT\n");
            break;
            case 10:
            printf("10.tinh toan phan so\n");
            break;
            case 11:
            printf("thoát chương trình\n");
            exit(0);
            default:
            printf("lựa chọn của bạn không hợp lệ vui lòng chọn lại\n");
        }
     
    }while(1);
     
 return 0;
}
