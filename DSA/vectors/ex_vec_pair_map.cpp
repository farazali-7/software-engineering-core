
/*Q1. Vector traversal
Create a vector of integers {5, 10, 15, 20} and:
Print all elements using a classic for loop
Print all elements using a range-based loop
Print all elements using an iterator with auto

    std::vector<int> vec =  {5, 10, 15, 20};
    for(int i=0 ; i<vec.size(); i++){
        std::cout<<vec[i]<<"\n";
    }
        std::cout<<vec.size()<<"\n";
for(int s : vec){
    //range base loop 
    std::cout<<s<<" ";
}

for(auto &it : vec){
    //range base loop 
    std::cout<<it;
}*/

/*
Q2: Create a pair<int, int> representing (x, y) coordinates:
Initialize it
Print x and y
Update both values
  std::pair<int,int>p1 ={5,6};
    std::cout<<p1.first<<" "<<p1.second;
    std::endl;
    p1.first=9;
    p1.second=15;
    std::cout<<p1.first<<" "<<p1.second;

*/

   /*Q4. Vector of pairs
Create a vector of pairs that stores:
(1,2), (3,4), (5,6)
Then:
Print each pair using an iterator
Print using range-based loop
    std::vector<std::pair<int, int>>pvec={{1,2}, {3,4}, {5,6}};
    for(auto it=pvec.begin(); it!=pvec.end(); it++ ){
        std::cout<<it->first<<it->second<<"\n";
    }
    
    for(auto s :pvec){
         std::cout<<s.first<<s.second<<"\n";
    }*/