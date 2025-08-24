#include<stdio.h>
void main(){
    int hash[256]={0};
    char ch[50];
    int l=0,j=0;
    gets(ch);
    while(ch[l]!='\0'){
        l++;
    }
    for(int i=0;i<l;i++){
        hash[ch[i]-'a']++;
    }

    for(int i=0;i<256;i++){
        if(hash[i]>=1 && ch[j]!='\0'){
            printf("%c %d\n",ch[j],hash[i]);
            j++;
        }
    }
}