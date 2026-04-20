### sort

对于sort，我们返回true就意味着希望A排在前面

#### 最简单的routine

```cpp
vector<int> nums={1,2,3,4,5};
sort(nums.begin(),nums.end());//默认是升序return a<b;
```

#### 反向排序

```cpp
sort(nums.begin(),nums.end(),greater<int>());
sort(nums.begin(),nums.end(),[](int &a,int &b){return b>a});//return 的是一个布尔条件，或者说这个时候，我们让a排在b的前面（
```

#### Lambda自定义

关于Lambda，在C++中就是[](int a){return a;}这样子就完事了。
[]是捕获列表，捕获参数用的，排序算法里用不到，我们有函数內部的参数够了，不需要额外捕获参数

```cpp
struct Person{
    int height;
    string name;
};
vector<Person> people = {{170, "Bob"}, {180, "Alice"}, {170, "Adam"}};
sort(people.begin(),people.end(),[](const Person& a,const Person& b){
    if(a.height==b.height){
        return a.name<b.name;
    }
    return a.height<b.height;
});
```

### reverse

直接反转数组内的元素。左闭右开喔。
```cpp
string str="ahsgasg"
reverse(str.begin(),str.end())
reverse(&str[0],&str[str.size()]);
```

### max/min/count/max_element/min_element

其中max和min直接作用于元素，而max_element和min_element作用于迭代器。
```cpp
string str("12346677745");
int a=count(str.begin(),str.end(),'1');

```