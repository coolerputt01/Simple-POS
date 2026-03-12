#include <iostream>
#include "src/Product/Product.hpp"
#include "src/Product/ProductCategory.h"
#include "src/config.hpp"
#include "src/SlintComponents/ui.h"
#include "src/Auth/User.hpp"
#include "src/Transaction/Transaction.hpp"


int main(){
    auto signup = Signup::create();
    signup->run();
    
    // Product product = Product("Papaya Soap","Face cleansing soap that works for all types of skin.",Category::FASHION,8000);
    // std::cout<<product.getProduct();
    // auto storage = initStorage();
    // storage.sync_schema();
    // Product product2 = Product("Banana Basket","Mouth watering banana fruit(Basket size).",Category::FOOD,800);
    // Transaction t = Transaction();
    // t.append(product,4);
    // t.append(product2,6);
    // t.getSum();
    // t.save(storage);
    // std::cout<<"Sum: "<<t.sum()<<std::endl;
    
    // product.createProduct(storage);
    // product2.createProduct(storage);
    // product.deleteProduct(storage);
    // product.updateProduct("Strawberry Paste","Teeth cleansing paste for strong and healthy teeth.",storage);
    
    // User user = User("coolerputt","password","test@gmail.com");
    // auto storage = initStorage();
    // storage.sync_schema();
    // user.signup(storage);
    // user.signin(storage);
    return 0;
}