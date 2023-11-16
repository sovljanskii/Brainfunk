#include <stdio.h>

//BRAINF*CK Compiler

static int arr[50] = {};
static int *p=arr;

void checkChar(char c){
    switch (c){
        case ('+'): *p+=1; break;
        case ('-'): *p-=1; break;
        case ('>'): p++; break;
        case ('<'): p--; break;
        case ('.'): putchar(*p); break;
        case (','): *p=getchar(); break;
        default : break;
    }
}

int main() {
    char c;
    _Bool loop=0;
    char loopInput[50]={};
    int i=0;

    while ((c = getchar())!='\n'){
        if(c=='['){loop=1; continue;}
        else if (c==']'){
            while (*p>0 && *p<=127){
                for (int j=0;j<i;j++){
                    checkChar(loopInput[j]);
                }
            }
            i=0;
            loop=0;
        }
        else if (loop){
            loopInput[i++]=c;
        }
        else checkChar(c);
    }
    return 0;
}
