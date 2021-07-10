#include <iostream>
#include "myString.h"
#include <cstring>

int main() {
    myString s1("helloworld");
    cout <<s1<<endl;
    cout<<s1.length()<<endl;
    myString s2;
    cout<<s2<<endl;
    myString s3(10,'l');
    cout<<s3<<endl;
    cout<<s3.length()<<endl;
    s3 = "hello world";
    cout<<s3<<endl;
    s3 = s1;
    s2 = "ppp";
    cout<<s3<<endl;
    cout<<s3.length()<<endl;
    cout<<s1.length()<<endl;
    cout<<s1<<endl;
    cout<<(s3==s2)<<endl;
    myString s4(s3);
    cout<<s4<<endl;
    myString s5 = s3+s4;
    cout<<s5<<endl;
    s5 += "ppp";
    cout<<s5<<endl;
    cout<<s5[0]<<endl;
    myString s6 = "opkg";
    s6.append(" install");
    cout<<s6<<endl;

    return 0;
}
