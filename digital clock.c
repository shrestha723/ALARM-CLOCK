#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    int h=0,m=0,s=0;
    system("cls");
    printf("Enter the time format in HH:MM:SS: ");
    scanf("%d%d%d",&h,&m,&s);
    start:
    for(h;h<24;h++){
        for(m;m<60;m++){
            for(s;s<60;s++){
                system("cls");
                printf("\n\n\n\t\t\t\t%d:%d:%d",h,m,s);
                if(h<12){
                    printf("\tAM");
                }
                else{
                    printf("\tPM");
                }
                printf("\n\n\n\t\t\t\tFRIDAY 06 AUG");
                for(long int i=0;i<3619999;i++){
                    i++;
                    i--;
                }
            }
            s=0;
        }
        m=0;
    }
    h=0;
    goto start;
}
