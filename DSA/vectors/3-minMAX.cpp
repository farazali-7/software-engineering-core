#include<iostream>
#include<vector>
#include<climits>

void takeINPUTS(std::vector<int> &arr , int n){
    std::cout<<"enter values :"<<"\n";
    for(int i=0 ; i<n ; i++){
    int x;
    std::cin>>x;
    arr.push_back(x);
    }
}
void minVALUE(std::vector<int> &arr , int n){
  int min= INT_MAX;
   for(int i=0 ; i<n ; i++){
       if(arr[i]<min){
          min=arr[i];
       }
   }
   std::cout<<"min value is :"<<min<<"  "<<"\n";
}

void maxVALUE(std::vector<int> &arr , int n){
  int max= INT_MIN;
   for(int i=0 ; i<n ; i++){
       if(arr[i]>max){
          max=arr[i];
       }
   }
   std::cout<<"max value is :"<<max<<"  "<<"\n";
}

int main(){
    std::vector<int> arr;
     int n;
    std::cout<<"enter size of vector :";
    std::cin >> n;
   takeINPUTS(arr , n);
   minVALUE(arr , n);
      maxVALUE(arr , n);

   
}

