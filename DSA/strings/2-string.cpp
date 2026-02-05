#include<iostream>
#include<string>




//Modern approach tos use strings #include<string>
void stringMethods(std::string &s1){
    
    
    // length and size method both are same
std::cout << s1.length() << "\n";
std::cout << s1.size() << "\n";

// 2-push_back only take single char as input
s1.push_back('R');
s1.push_back('a');
std::cout << "2- after pushing Ra: " << s1 << "\n";
// 3-pop_back
s1.pop_back();
std::cout << "3- after poping a val: " << s1 << "\n";
// 4-empty
std::cout << "4- is empty: " << s1.empty() << "\n";
// 5-substr = substr(1  ,4 ) [start position , end ]
std::cout << "5- substr form [2,5] :" << s1.substr(2, 5) << "\n";
// 6-find = retrun the idx from where starting
std::cout << "6- find method :" << s1.find("ali") << "\n";
}



int main(){
  std::string name1 = "faraz world ";
  std::string name2 = "ali world";
  
  //concatination
  std::cout<<name1+name2<<"\n";
  
  //passing string to function
  stringMethods(name2);
 
  
  return 0;
}