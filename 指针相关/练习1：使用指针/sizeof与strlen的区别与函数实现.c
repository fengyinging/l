#include<stdio.h>
#include<string.h>

//strlen与sizeoc函数实现
size_t mylen(const char *s){
    int cnt=0;
    int idx=0;
    while(s[idx]!='\0'){
        ++cnt;
        ++idx;
    }
    return cnt;
}


int main(int argc, char const *argv[])
{
    //数组大小计算  strlen与sizeof的区别
    char line[]="hello";
    printf("strlen:%lu\n",strlen(line));  //strlen不计算\0    会输出5
    printf("sizeof:%lu\n",sizeof(line));  //sizeof会计算\0    会输出6

    //用函数实现strlen的计算
    printf("strlen:%lu\n",mylen(line));  //返回和strlen相同的计算结果
    //如果定义的是int型  那么类型转换就用%d
    //相同的道理，也可以用函数代替sizeof
    return 0;
    
}
