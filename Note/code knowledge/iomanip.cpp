#include<iostream>
#include<iomanip>
using namespace std;

// - setfill(char c);
// - setprecision(int n);
// - setbase(int base);
// - (no)showbase
// - (no)showpoint
// - (no)uppercase
// - fixed/scientific/defaultfloat（default output 6个有效数字，如果fixed和scientific后有参数就是小数点后保留多少位
// - left/right/internal

// - setw(int n)  是常用里为数不多一次性操作符



//1.输出更长的数字

void fun1(int a){
    cout<<setw(10)<<a<<endl;
    cout<<setw(2)<<left<<a<<endl;
    cout<<setw(2)<<setfill('0')<<a<<endl;
}
//setfill里最好加char哦
//默认是右对齐哦（左对齐的话，假如setfill(0)那数字就变大啦


//2.输出更有精度的数字

void fun2(int a){
    cout<<a<<endl;//直接输出的话，默认setprecision(6);
    //对于default
    cout<<setprecision(3)<<a<<endl;//3位有效数字，可能小数，可能科学计数
    cout<<fixed<<setprecision(3)<<a<<endl;//小数点后面保留两位
    cout<<scientific<<setprecision(3)<<endl;//科学计数法小数点后保留多少位
    cout<<showpoint<<showpos<<a<<endl;//输出一些无用的东西，后面的.0，前面的＋
    cout<<noshowpoint<<noshowpos;
    cout<<defaultfloat<<endl;//回到6位
}


//3.输出其他进制

void fun3(int a){
    cout<<dec<<a<<endl;
    cout<<oct<<a<<endl;
    cout<<hex<<a<<endl;
    cout<<showbase<<a<<endl;//可以输出x与0x
    cout<<uppercase<<a<<endl;//输出的x与0x可以大写

}


int main(){
    fun3(11);
    return 0;
}