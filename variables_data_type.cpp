#include<typeinfo>
#include<iostream>
#include<vector>
#include <boost/type_index.hpp>
int main(){
    //////////////////////////////First Way /////////////////////////////
    auto age = 40; //deduce age type fromm initialization
    auto weight = 65.8;
    // auto name = "Aml"; 
    auto name = std::string("Aml");
    auto vec = std::vector<int>{1,2,3,4,5};
    std::string str = "Helloooo";
    std::cout<<"Data Type of age is: "<<typeid(age).name()<<std::endl;
    std::cout<<"Data Type of weight is: "<<typeid(weight).name()<<std::endl;
    std::cout<<"Data Type of name is: "<<typeid(name).name()<<std::endl;
    std::cout<<"Data Type of name is: "<<typeid(vec).name()<<std::endl;
    std::cout<<"Data Type of name is: "<<typeid(str).name()<<std::endl;
    ///////////////////////////////Second way ////////////////////////////
    auto x = 10;
    auto y = 5.5;
    auto str = std::string("Hello, World!");
    auto vec = std::vector<int>{1, 2, 3, 4, 5};
    std::cout << "Type of x: " << boost::typeindex::type_id_with_cvr<decltype(x)>().pretty_name() << std::endl;
    std::cout << "Type of y: " << boost::typeindex::type_id_with_cvr<decltype(y)>().pretty_name() << std::endl;
    std::cout << "Type of str: " << boost::typeindex::type_id_with_cvr<decltype(str)>().pretty_name() << std::endl;
    std::cout << "Type of vec: " << boost::typeindex::type_id_with_cvr<decltype(vec)>().pretty_name() << std::endl;

    return 0;
}