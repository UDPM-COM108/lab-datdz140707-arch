#include <stdio.h>
int main(){
    double diem;
    printf("Nhap diem cua ban:");
    scanf("%lf", &diem);
    /*if(diem>=5 && diem<=10){
        printf("Dau!!!");
    }else
        printf("Rot$$$");
    if (diem >=9){
        printf("Xuat sac");
    } else if (diem >=8 && diem <9){
        printf("Gioi");
    }else if (diem >=7 && diem <8){
        printf("Kha");
    }else if (diem >=5 && diem <7){
        printf("Trung binh");
    }else {
        printf("Yeu");
    }*/
     printf("VietNam co bao nhieu dan toc anh em: \n");
     printf("a. 52\nb. 53\nc. 54\nd. 55\n");
     printf("Nhap dap an cua ban: ");
     char dapAn;
     scanf(" %s", &dapAn);
     switch(dapAn){
         case 'a': printf("Ban da chon sai\n");
         break;
         case 'b': printf("Ban da chon sai\n");
         break;
         case 'c': printf("Ban da chon dung\n");
         break;
         case 'd': printf("Ban da chon sai\n");
         break;
         deafaulf:
            printf("Dap an khong dung bo dap an (a,b,c,d)");
     }
 return 0;
}