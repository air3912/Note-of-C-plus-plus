#include<stdio.h>
#include<map>
using namespace std;

//插入，查找，删除
int main(){
    map<int ,int >cnt;
    cnt[1]=1;
    cnt[3]=1;
    cnt.insert({2,1});
    printf("%d",cnt.at(1));
    printf("%d",cnt[2]);

    //遍历并安全删除
    for(auto it = cnt.begin(); it != cnt.end(); ){
        if(it->second == 0){
            it = cnt.erase(it);  // erase返回下一个有效迭代器
        } else {
            ++it;
        }
    }

    //查找
    if(cnt.count(1)){
        printf("1还在");
    }
    return 0;
}