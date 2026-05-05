#include<unordered_map>
然后就可以用啦

- 首先是先调用一个unordered_map<string,int> map; 

- 遍历
for(auto it:map){
    cout<<“the first is<<it.first<<"and the second is<<it.second<<endl;
}

- map.count(str)返回0/1，表示有没有这个东西
- map.at(str)取对应的哈希值。
- map.find(str)返回对应的迭代器，如果没有会直接返回map.end();