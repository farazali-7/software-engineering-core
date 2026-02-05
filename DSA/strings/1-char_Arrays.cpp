#include <iostream>
#include <cstring>

// Imp NOTE
// cin stops at space or enter etc
// CHAR ARRAYS = outdated approach to work with strings
// Modern approach is using strings #include<string>

// in case of char arrays "for each" run even after '\0' so give messy/garabdge values
// for each is best for -->strings,vectors

int main()
{
    // in the end of char should be '\0' represent end point
    // 1-"\0" not added so there will be alot of garbadge values as size is 100
    char st[100] = {'a', 's', 'd', 'f', '\0'};
    // 2-by default add "\0" at the end
    char starr[] = "hello";
    // 3-cin in char arrays
    char iarr[100];

    std::cout << "4 the value of array :" << st[4] << "\n";
    // print string of char array
    std::cout << "string of char array :" << st << "\n";
    std::cout << starr << "\n";

    // cin
    std::cout << "enter string" << "\n";
    std::cin.getline(iarr, 100, '&');

    //  std::cout<<strlen(starr)<<"\n";

    /*for(char x :iarr){
        //
         std::cout<<x<<"\n";
    }*/


    
    // to find length of the char array manually
    int len = 0;
    for (int i = 0; iarr[i] != '\0'; i++)
    {
        len++;
    }
    std::cout << "lenth of the array :" << len;

    /*
   for(char x :st){
       // will return many garbadge values or empty fields
        std::cout<<x<<" ";
   }*/
}