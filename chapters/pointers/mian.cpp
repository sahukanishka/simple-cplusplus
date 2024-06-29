#include <iostream>

int main(){
    int x = 10;
    int *x_pointer ;
    int **y_pointer = &x_pointer ;
    std::cout<<"Output : "<<x<<std::endl;
    std::cout<<"Output : "<<*x_pointer<<std::endl;
    x_pointer = &x;
    std::cout<<"Output : "<<x_pointer<<std::endl;
    std::cout<<"Output : "<<*x_pointer<<std::endl;
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
    

    
   
}