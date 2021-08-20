/*
    구조체를 이용하여 정렬하는 방법
    가입순으로 멤버별 order값이 할당된다.
*/

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


struct Person{
    int age;
    string name;
    int order;
};

bool compare(Person p1, Person p2){
    if (p1.age < p2.age){
        return true;
    }
    else if(p1.age == p2.age){
        return p1.order < p2.order;
    }
    else return false;
}

int main(){
    int n;
    cin>>n;
    vector<Person> members;

    for (int i = 0; i < n; i++)
    {
        Person p;
        int age;
        string name;
        cin >> age >> name;
        p.age = age;
        p.name = name;
        p.order = i;
        members.push_back(p);
    }
    sort(members.begin(),members.end(),compare);
    
    for (int i = 0; i < n; i++)
    {
        cout<< members[i].age << " " << members[i].name << "\n";
    }
    

    return 0;
}