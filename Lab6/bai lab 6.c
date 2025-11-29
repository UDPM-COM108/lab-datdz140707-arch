#include<stdio.h>
#include<math.h>
 int main(){

    /*//dinh nghia ham
    int a[100], n;
    int i;
    int sum=0;
    int count=0;

    //nhap so phan tu
    printf("nhap vao gia tri n:");
    scanf("%d", &n);

    //nhap mang
    for(i=0;i<n;i++){
        printf("nhap vao mang a[%d]", i);
        scanf("%d", &a[i]);
    }

    //Bai 1:tinh tong va dem cac so chia het cho 3
    for(i=0;i<n;i++){
        if(a[i]%3==0){
            sum+=a[i];
            count++;
        }
    }

    //tinh tong va trung binh
    if(count==0){
        printf("khong co so nao chia het cho 3");
    }else{
        float tb=(float)sum/count;
        printf("trung binh cac so chia het cho 3 la %.2f\n", tb);
        printf("tong cac so chia het cho 3 la %d\n", sum);
    }


    //Bai 2: tim gia tri lon nhat va nho nhat trong mang 
    int max, min;
    max=a[0];
    min=a[0];

    //tim max min
    for(i=1;i<n;i++){
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }
    printf("gia tri lon nhat trong mang la:%d\n", max);
    printf("gia tri nho nhat trong mang la:%d\n", min);*/

    //Bai 3:sap xep bien
    int a[50];
    int i,j,temp,n;

    //dinh nghia ham
    printf("nhap vao gia tri n:");
    scanf("%d",&n);

    // nhap mang
    for (i=0;i<n;i++){
        printf("nhap vao a[%d]", i);
        scanf("%d", &a[i]);
    }

    // sap xep tang dan
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
        if (a[i]<a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
    //duyet mang a
    printf("mang sao khi sap xep:");
    for(i=0;i<n;i++){
        printf("%d ", a[i]);
    }

    return 0;
 }
    
    