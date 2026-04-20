
```cpp
#include<sstream>

stringstream ss;
ss<<12<<"abcd"<<13;
string s=ss.str();
```


```cpp
string sentence="I love me";
stgingstream ss(sectence);
string word;
while(ss>>word){
    cout<<word<<endl;
}
```

ss.clear()