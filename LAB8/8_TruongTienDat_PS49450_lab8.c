#include<stdio.h>
#include<string.h>
struct SinhVien{
    char hoTen[50];
    int tuoi;
    float diem;
    char hocLuc[10];
};
int main(){
    int x,i,j;
    printf("nhap vao so sinh vien muon nhap:");
    scanf("%d",&x);
    struct SinhVien sv[x];
    for(i=0;i<x;i++){
        printf("nhap vao thong tin sinh vien thu %d:\n",i+1);
        printf("ten:");
        scanf("%s",sv[i].hoTen);
        printf("tuoi:");
        scanf("%d",&sv[i].tuoi);
        printf("diem:");
        scanf("%f",&sv[i].diem);}

        //tinh hoc luc
        if(sv[i].diem>=9){
            strcpy(sv[i].hocLuc,"Xuat sac");
        }else if(sv[i].diem>=8){
            strcpy(sv[i].hocLuc,"Gioi");
        }else if(sv[i].diem>=7){
            strcpy(sv[i].hocLuc,"Kha");
        }else if(sv[i].diem>=5){
            strcpy(sv[i].hocLuc,"Trung binh");
        }else{
            strcpy(sv[i].hocLuc,"Yeu");
        }
        //sap xep diem
        for(i=0;i<x;i++){
            for(j=i+1;j<x;j++){
                if(sv[i].diem<sv[j].diem){
                    struct SinhVien temp=sv[i];
                    sv[i]=sv[j];
                    sv[j]=temp;
                }
            }
        }
        //in ra danh sach sinh vien
        printf("danh sach sinh vien \n");
        printf("\nHo ten\tTuoi\tDiem\tHoc luc\n");
        for(i=0;i<x;i++){
            printf("%s\t%d\t%.1f\t%s");
        }
        return 0;
        }   

