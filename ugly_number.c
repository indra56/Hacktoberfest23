#include<stdio.h>
int main(){
    int n,f=0;
    scanf("%d",&n);
    while(n!=1){
        if(n%2==0) n=n/2;
        else if(n%3==0) n=n/3;
        else if(n%5==0) n=n/5;
        else {
            printf("Not Ugly Number");
            f=1;
            break;
        }
    }
    if(f==0) printf("Ugly Number");
}
