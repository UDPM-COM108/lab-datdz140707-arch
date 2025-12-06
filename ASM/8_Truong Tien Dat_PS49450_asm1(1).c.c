#include<stdio.h>
#include<stdlib.h>
int main(){
    
    do{
      printf("\n|Wellcome to Tien Dat' ASSIGMENT COM108|\n");
      printf("|=================MENU=================|\n");
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
         printf("\nNhập lựa chọn của bạn:");
         scanf("%d", &choice);
         switch(choice){
            case 1:
            printf("ban da chon chuc nang 1\n");
            break;
            case 2:
            printf("ban da chon chuc nang 2\n");
            break;
            case 3:
            printf("ban da chon chuc nang 3\n");
            break;
            case 4:
            printf("ban da chon chuc nang 4\n");
            break;
            case 5:
            printf("ban da chon chuc nang 5\n");
            break;
            case 6:
            printf("ban da chon chuc nang 6\n");
            break;
            case 7:
            printf("ban da chon chuc nang 7\n");
            break;
            case 8:
            printf("ban da chon chuc nang 8\n");
            break;
            case 9:
            printf("ban da chon chuc nang 9\n");
            break;
            case 10:
            printf("ban da chon chuc nang 10\n");
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
