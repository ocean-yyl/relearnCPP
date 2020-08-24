#include "funcs.h"

/*
 * main 函数直接读取参数-argc、argv
 int main(int argc,char *argv[]) {
    printf("argc=%d\n",argc);
    for (int i = 0;i < argc;i++){
        printf("argv[%d]=%s\n",i,argv[i]);
    }
    getchar();
    return 0;
}
 */

int main(){
    welcome();
    getchar();
    return 0;
}
