#include <stdio.h>
#include<math.h>

//định nghĩa hàm
int main(){
   int min,max;
   int a,b,c;
      printf("nhap vao 3 gia tri:");
      scanf("%d %d %d", &a, &b, &c);

   //tạo hàm min max
   min=a;
   max=a;
      if(b>max){
         max=b;
      }
      if(b<min){
         min=b;
      }
      if(c>max){
         max=c;
      }
      if(c<min){
         min=c;
      }

 printf("so lon nhat co gia tri la: %.0d\n", max);
 printf("so nho nhat co gia tri la: %.0d\n", min);


 //tính năm nhuận
 
 //định nghĩa hàm
 int y;
 printf("nhap vao nam can xem:");
 scanf("%d", &y);

 //tạo ham tinh nam nhuan
 if(y%400 ==0){
    printf("%d la nam nhuan\n", y);
 }
 else if (y%4==0){
    printf("%d la nam nhuan\n", y);
 }
 else if (y%100!=0){
    printf("%d khong phai la nam nhuan\n",y);
 }
 else{
    printf("%d khong phai nam nhuan\n");
 }


 //kiểm tra các số trong [1,1000] mà các số chia hết cho 5 và chia hết cho 9

 //định nghĩa hàm
 int n;
   printf("nhap 1 so bat ki trong khoang[1,1000]:\n");
   scanf("%d",&n);

   //tinh chia het ch 5 va 9
   if(n<1|| n>1000){
      printf("so ban nhap khong co trong khoan!!\n");
      return 0;
   }
   if (n%5==0 && n%9==0){
      printf("%d chia het cho 5 va chia het cho 9\n", n);
   }else{
      printf("%d khong chia het cho 5 va chia het cho 9\n");
   }
   
    return 0;
}