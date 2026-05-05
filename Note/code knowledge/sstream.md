
```cpp
#include<sstream>

stringstream ss;
ss<<12<<"abcd"<<13;
string s=ss.str();
```


```cpp
string sentence="I love me";
stringstream ss(sectence);
string word;
while(ss>>word){
    cout<<word<<endl;
}
```

ss.clear()