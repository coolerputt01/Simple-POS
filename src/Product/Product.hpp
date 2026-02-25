#pragma once

#include <string>
#include <optional>
#include <iostream>
#include <random>

#include "ProductCategory.h"
#include "../Utils/utils.h"

long long randomID(){
    std::random_device rd;
    std::mt19937_64 gen(rd());
    std::uniform_int_distribution<long long> dist(1'000'000'000'000'000LL);
    return dist(gen);
}


class Product {
    public:
        std::string productName;
        std::string productDesc;
        std::string dateOfStock;
        std::string updatedAt;
        long long int id;
        Category category;

        Product() = default;
        Product(std::string pN,std::string pD,Category cat) : productName(pN),productDesc(pD),category(cat){          
            id = randomID();
            dateOfStock = getCurrentTime();
            updatedAt = "NIL";
        };
        std::string getProduct(){
            std::string text = "Product Name: " + productName + "\nProduct Description: " + productDesc + "\nStock Date: " + dateOfStock + '\n';
            return text;
        }
        Category getCategory() const {
             return category; 
        }
        void setCategory(Category cat) {
             category = std::move(cat);  
        }

        int getCategoryInt() const { 
            return static_cast<int>(category); 
        }

        void setCategoryInt(int cat) { 
            category = static_cast<Category>(cat); 
        }

        void updateProduct(std::optional<std::string> newProductName,std::optional<std::string> newProductDesc,auto& storage) noexcept{
            if(newProductName.has_value() && newProductName.value() != productName){
                productName = newProductName.value();
            }
            if (newProductDesc.has_value() && newProductDesc.value() != productDesc){
                productDesc = newProductDesc.value();
            }
            
            updatedAt = getCurrentTime();
            storage.replace(*this);
            std::cout<<"Product :"<<id<<" successfully updated!\n";
            
        }
        // void deleteProduct(){
        //     delete this;
        //     std::cout<<"Product successfully deleted!";
        // }
        void createProduct(auto& storage) {
            try{
                storage.replace(*this);
                std::cout<<"Successfully added product to db!\n";
            }catch(const std::runtime_error &err){
                std::cerr<< err.what()<<std::endl;
            }
        }
        long long int getID(){
            return id;
        }

        ~Product() = default;

};