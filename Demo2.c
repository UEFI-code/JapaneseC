#include "Jp_C.h"
#include "Jp_std_funcs.h"
#include 標準入出力頭

整数 main() 
{
    文字 変数A[] = "Hello, world!\n";
    出力をフォーマット("%s", 変数A);
    for(整数 変数B = 0; 変数B < 10; 変数B++)
    {
        出力をフォーマット("%c\n", 変数A[変数B]);
    }
    戻ります 0;
}