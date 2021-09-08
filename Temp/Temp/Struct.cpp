//
// Created by Tianzhuoran on 2021/9/8.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    struct student {
        string name;
        int ID;

    };


    student s1{"a", 1};

    student *p =& s1;

    cout<<p->name<<p->ID<<endl;

}