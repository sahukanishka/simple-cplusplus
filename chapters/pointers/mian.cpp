#include <iostream>
using namespace std;
int main(){
    int x = 10;
    int *x_pointer = &x;
    int **y_pointer = &x_pointer ;
    std::cout<<"Memory address of x "<<x_pointer<<std::endl;
    std::cout<<"Value of x from pointer "<<*x_pointer<<std::endl;
    std::cout<<"Memory address of x_pointer : "<<y_pointer<<std::endl;
    std::cout<<"Value of x_pointer : "<<*y_pointer<<std::endl;
    *x_pointer = *x_pointer + 1;
    std::cout<<"Output : "<<x_pointer<<std::endl;
    std::cout<<"Output : "<<*x_pointer<<std::endl;
    std::cout<<"Output : "<<*y_pointer<<std::endl;
    std::cout<<"Output : "<<**y_pointer<<std::endl;
    **y_pointer = 12;
    std::cout<<"Output : "<<x_pointer<<std::endl;
    std::cout<<"Output : "<<*x_pointer<<std::endl;
    std::cout<<"Output : "<<*y_pointer<<std::endl;
    std::cout<<"Output : "<<**y_pointer<<std::endl;

    int var[3] = {10,20,30};
    int *ptr;
    ptr = var;
    int length = sizeof(var) / sizeof(var[0]);
    for(int a = 0;a < length;a++){
        cout<<"--> "<<a<<" "<<ptr<<endl;
        cout<<"--> "<<a<<" "<<*ptr<<endl;
        ptr++;
    }

    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int (*ptr_matrix)[3] = matrix;

    // 1,2,3 - 0,0 - 0,1 - 0,2 
    // 4,5,6 - 1,0 - 1,1 - 1,2
    // 7,8,9 - 2,0 - 2,1 - 2,2

    for(int i = 0; i < 3 ; i++){
       for(int j = 0;j < 3;j++){
         cout<<i<<","<<j<<" --> "<<matrix[i][j]<<endl;
         cout<<*(*(ptr_matrix+i)+j) <<endl;
       }
    }


   
}