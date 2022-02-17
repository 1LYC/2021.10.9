//对字符串中的所有单词进行倒排。

// 说明：

// 1、构成单词的字符只有26个大写或小写英文字母；

// 2、非构成单词的字符均视为单词间隔符；

// 3、要求倒排后的单词间隔符以一个空格表示；如果原字符串中相邻单词间有多个间隔符时，倒排转换后也只允许出现一个空格间隔符；

// 4、每个单词最长20个字母
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
void overturn(char* left, char* right)
{
    assert(left && right);
    while (left < right){
        char tmp = *right;
        *right = *left;
        *left = tmp;
        left++;
        right--;
    }
}

int main()
{
    //三步翻转法
    //char arr[100] = { 0 };
    char* arr = (char*)malloc(10000 * sizeof(char));
    if (arr == NULL){
        perror("main");
        return 1;
    }
    gets(arr);
    int len = strlen(arr);
    //全部翻转
    overturn(arr, arr + len - 1);
    //单词翻转
    char* right = arr;
    char* left = NULL;

    while (right <arr+len-1){
        left = right;
        while (isalpha(*right)){
            right++;
        }
        overturn(left, right - 1);
        if (isalpha(*right) == 0){
            *right = ' ';
            right++;
        }
    }
    int i = 0;
    for (i = 0;i < len;i++){
        if (arr[i] != ' '){
            printf("%c", arr[i]);
        }
        if (arr[i] == ' ' && arr[i + 1] != ' '){
            printf("%c", arr[i]);
        }
    }
    free(arr);
    arr=NULL;
    return 0;
}
