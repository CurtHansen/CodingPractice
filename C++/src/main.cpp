#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <deque>
#include <queue>
#include <stack>


int main(){

    //////
    std::cout << std::endl;
    std::map<std::string, int> mymap;
    std::map<std::string, int>::iterator it;
    mymap["Curt"] = strlen("Curt");
    mymap["Hansen"] = strlen("Hansen");
    std::string something = "Bob";
    mymap[something] = something.size();
    it = mymap.begin();

    while (it != mymap.end()){
        std::cout << "Name " << it->first << " has number of chars equal to " << it->second << std::endl;
        it++;
    }

    std::string attempt;
    attempt = "Curt";
    it = mymap.find(attempt);
    if (it != mymap.end()){
        std::cout << "Attempt " << attempt << " found with value " << it->second << std::endl;
    } else {
        std::cout << "Attempt " << attempt << " not found." << std::endl;
    }
    attempt = "Joe";
    it = mymap.find(attempt);
    if (it != mymap.end()){
        std::cout << "Attempt " << attempt << " found with value " << it->second << std::endl;
    } else {
        std::cout << "Attempt " << attempt << " not found." << std::endl;
    }

    ///////
    std::cout << std::endl;
    std::string mystring = "CurtHansen";
    int n = mystring.size();
    std::cout << mystring.substr(n-4,1) + mystring.substr(7,2) << std::endl;
    mystring = mystring.substr(0, 3) + mystring.substr(5);
    std::cout << "mystring is now " << mystring << std::endl;

    ///////
    std::cout << std::endl;
    std::queue<int> myqueue;
    myqueue.push(5);
    myqueue.push(50);
    myqueue.push(56);
    myqueue.push(100);
    myqueue.push(500);
    myqueue.push(1012);

    n = 0;
    while (!myqueue.empty()) {
        n = myqueue.front();
        myqueue.pop();
        std::cout << n << std::endl;
    }

    ///////
    std::cout << std::endl;
    struct Person{
        int age=0;
        std::string name;
    };
    Person dad;
    dad.age = 10; dad.name = "Bob";

    struct Person* ptr;
    ptr = &dad;

    std::cout << "Dad's age is " << ptr->age << " and name is " << ptr->name << "." << std::endl;

    return 0;

}