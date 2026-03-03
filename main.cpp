#include <iostream>
#include "src/Product/Product.hpp"
#include "src/Product/ProductCategory.h"
#include "src/config.hpp"
#include "src/SlintComponents/ui.h"
#include "src/Auth/User.hpp"


int main(){
    // auto hello_world = HelloWorld::create();
    // hello_world->set_my_label("Hello from C++");
    // hello_world->run();
    // Product product = Product("Papaya Soap","Face cleansing soap that works for all types of skin.",Category::FASHION);
    //std::cout<<product.getProduct();
    // auto storage = initStorage();
    // storage.sync_schema();
    // product.createProduct(storage);
    // product.deleteProduct(storage);
    // product.updateProduct("Strawberry Paste","Teeth cleansing paste for strong and healthy teeth.",storage);
    User user = User("coolerputt","password","test@gmail.com");
    auto storage = initStorage();
    storage.sync_schema();
    user.signup(storage);
    user.signin(storage);
    return 0;
}