#include<iostream>
#include<string.h>
using namespace std;
// void string_compare(char str[],char []dest_str){
// }
 
void string_concat(char str[],char str2[]){
   int i = 0;
    char temp[10]={0};
    while(*(str+i)!='\0'){
        *(temp+i)=*(str+i);
        i++;

    }
   int p = 0;
    while(*(str2+p)!='\0'){
        *(temp+i)=*(str2+p);
        p++;
        i++;
    }
    *(temp+i)='\0';
    for(int i = 0 ; temp[i]!='\0';i++){
        cout<<*(temp+i)<<" ";
    }
    
}

void string_reverse(char str[]){
    char temp[10]={0};
    int i =0;
    int p = 0;
    for(int n = strlen(str); n>0;n--){
           *(temp+p)=*(str+n);
           p++;
    }
    *(temp+p)='\0';
     for(int j = 0 ; temp[j]!='\0';j++){
        cout<<*(temp+j)<<" ";
    }
}


int main(){


    char str[4]={'a','b','c','d'};
    char str2[4]={'a','d','t','y'};
    string_concat(str,str2);
    string_reverse(str);
    return 0;

}

