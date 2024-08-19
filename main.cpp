//Library that includes basic commands 
#include <iostream>

int main(){

    //		. The compiler applies implicit conversions
	// 			when types are different in 
	//			an expression
	//		. Conversions are always done from the smallest
	//			to the largest type in this case int is 
	//			transformed to double before the expression
	//			is evaluated.Unless we are doing an assignment

    double price {45.6};
    auto units {10};

    double totalPrice = price*units;

    std::cout<<"Total Price: "<< totalPrice << std::endl;
    std::cout<<"Size of totalPrice: "<<sizeof(totalPrice)<<std::endl;

    //Implicit conversions in assignments
	// The assignment operation is going to cause an implicit
	// narrowing conversion , y is converted to int before assignment

    int x;
    double y {45.64};
    x=y;
    std::cout<<"The value of x is: "<< x << std::endl;
    std::cout<<"Size of x: "<<sizeof(x)<<std::endl;


    return 0;
}