#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int string_match(char* str,char* pat){
    int opcount = -1;
    int n = strlen(str);
    int m = strlen(pat);
    for(int i=0;i<=n-m;i++){
        opcount++;
        for(int j=0;j<m;j++){
            if(pat[j]==str[j+i]){
                opcount ++;
                if(j==m-1){
                printf("opcount = %d\n",opcount);
                return i;
                }
                continue;
            }
            else{
                opcount ++;
                break;
            }
        }
    }
    printf("opcount = %d\n",opcount);
    return -1;
}
int main(){
    printf("Enter input string\n");
    char str[100];
    gets(str);
    printf("Enter a string you want to match\n");
    char pat[100];
    gets(pat);
    int m = string_match(str,pat);
    printf("Match result : %d",m);
}