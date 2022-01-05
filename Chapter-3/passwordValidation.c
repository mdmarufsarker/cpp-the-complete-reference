#include<stdio.h>
void sign_on(void)
{
    char str[20] = "";
    int x;
    for(x=0; x<3 && strcmp(str, "password"); ++x) {
        printf("Enter password please:");
        gets(str);
    }
    if(x==3) return;
    /* else log user in ... */
}
int main(){
    sign_on();
}