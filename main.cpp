#include <iostream>
#include "src/Product/Product.hpp"
#include "src/Product/ProductCategory.h"
#include "src/config.hpp"
#include "src/SlintComponents/ui.h"


int main(){
    auto hello_world = HelloWorld::create();
    hello_world->set_my_label("Hello from C++");
    hello_world->run();
    // Product product = Product("Papaya Soap","Face cleansing soap that works for all types of skin.",Category::FASHION);
    // std::cout<<product.getProduct();
    // auto storage = initStorage();
    // storage.sync_schema();
    // product.createProduct(storage);
    // product.updateProduct("Strawberry Paste","Teeth cleansing paste for strong and healthy teeth.",storage);
    return 0;
}