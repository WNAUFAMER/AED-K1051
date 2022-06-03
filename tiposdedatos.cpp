#include <cassert>
#include <string>
#include <iostream>

int main() {
    //Bool
    assert (2 and (not 2) == false);
    assert(true != false );
    assert(~false);
    assert(true & false == false);
    assert (2 <= 2 == true);
    assert( (not true) == false);

    //Int
    assert(3+2==5);//
    assert(7/3==2);//
    assert('3'!=3);
    assert(5<10);
    assert(2*3/6==1);

    //Char
    assert('z'-'C'== 55);
    assert('A'!='a');
    assert('p'==112);
    assert(49+50=='c');

    //Double, Float, long double, unsigned long long
    assert(3.0 == 3);
    assert(3.1<6.3);
    assert(4.25 + 1.25 == 5.5);
    assert(2.75 - 1.25 == 1.5);
    assert(10e4 == 100000);
    //Strings
    assert("william"s + "naufamer"s == "william naufamer"s);
	assert(17 == "william naufamer"s.length());
	

    return 0;
}
