#include "main.h"


int main(void){
    printf("%d\n", global_int_from_hoge);
    
    add();

    printf("%d\n", global_int_from_hoge);

    global_int_from_hoge += 50000; // hogeで宣言されたグローバル変数をmainでメッチャ書き換えることができる
    printf("%d\n", global_int_from_hoge);

    return 0;
}
