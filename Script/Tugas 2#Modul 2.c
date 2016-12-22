#include<stdio.h>
int main()
{
    char hasilujian;
    printf("Masukan nilai ujian :");
    scanf("%c",&hasilujian);
    switch(hasilujian)
    {
    case'A':
        printf("Sangat baik!\n");
        break;
    case 'B':
    case 'C':
        printf("Baik\n");
        break;
    case 'D':
        printf("Cukup\n");
        break;
    case 'F':
        printf("Sebaiknya coba lagi\n");
        break;
    default :
        printf("Gagal\n");
    }
    printf("nilai anda adalah %c\n",hasilujian);
    return 0;
}
