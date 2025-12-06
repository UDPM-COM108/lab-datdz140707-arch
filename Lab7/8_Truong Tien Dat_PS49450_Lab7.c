#include<stdio.h>
#include<string.h>
int main(){
    //Bài 1:xây dựng chương trinh đếm nguyên âm và phụ âm của 1 chuỗi
    char s[100];
    printf("Xin moi nhap vao chuoi:");
    gets(s);
    int i=0;
    int count_n=0; //dem so nguyen am
    int count_p=0; //dem so phu am
    while(s[i] != '\0'){

        if(s[i]=='a' || s[i]=='i' || s[i]=='e' || s[i]=='u' || s[i]=='o' || s[i]=='A' || s[i]=='I' || s[i]=='E' || s[i]=='U' || s[i]=='O'){
            count_n++;
        }else{
            count_p++;
        }
        i++;
    }
    printf("Chuoi '%s'co chua:%d nguyen am va %d phu am\n", s,count_n,count_p);

    //Bài 2:xây dụng chương trình đăng nhập bằng usesed name và password

    //khai bao userd name va password
    char name[50];
    char password[50];
    char name_true[50];
    char password_true[50];

    //tao tai khoan
    printf("==Dang ky tai khoan==\n\n");
    printf("nhap vao tai khoan:");
    scanf("%s", name_true);
    printf("nhap vao mat khau:");
    scanf("%s", password_true);
    printf("==tao tai khoan thanh cong==\n\n");

    //dang nhap
    printf("Nhap usesed name:");
    scanf("%s", &name);
    printf("nhap vao password:");
    scanf("%s", &password);

    //neu dung va sai
    if(strcmp(name,name_true) ==0 &&strcmp(password,password_true)==0){
        printf("Dang nhap thanh cong\n");
    }else{
        printf("Ban da nhap sai ten tai khoan hoac mat khau!!!\n");
    }

    return 0;
}