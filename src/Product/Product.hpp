#pragma once

#include <string>
#include <optional>
#include <iostream>
#include <random>

#include "ProductCategory.h"
#include "../Utils/Utils.h"
#include "../Orm/sqlite_orm.h"

class Product {
    public:
        std::string productName;
        std::string productDesc;
        std::string dateOfStock;
        int price;
        std::string updatedAt;
        long long int id;
        Category category;

        Product() {
            id = randomID();
            dateOfStock = getCurrentTime();
        }
        Product(std::string pN,std::string pD,Category cat,int pr) : productName(pN),productDesc(pD),category(cat),price(pr){          
            id = randomID();
            dateOfStock = getCurrentTime();
            updatedAt = "NULL";
        };
        std::string getProduct(){
            std::string text = "Product ID: " + std::to_string(id) + "\nProduct Name: " + productName + "\nProduct Description: " + productDesc + "\nPrice: " + std::to_string(price) + "\nStock Date: " + dateOfStock + '\n';
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

        void updateProduct(std::string newProductName,std::string newProductDesc,auto& storage) noexcept{
            if ((newProductName.empty() && newProductName != productName)||(newProductDesc.empty() && newProductDesc != productDesc)) {return;}
            auto idCheck = storage.template get_pointer<Product>(this->id);
            if(!idCheck){
                std::cerr<<"Product ID does not exist please try again.\n";
                return;
            }
            productName = newProductName;
            productDesc = newProductDesc;
            updatedAt = getCurrentTime();
            storage.replace(*this);
            std::cout<<"Product :"<<id<<" successfully updated!\n";
            
        }
        void deleteProduct(auto& storage){
            storage.template remove<Product>(this->id);
            std::cout<<"Product successfully deleted!\n";
        }
        void createProduct(auto& storage) {
            try{
                auto idCheck = storage.template get_pointer<Product>(this->id);
                auto existingProduct = storage.select(&Product::productName,sqlite_orm::where(sqlite_orm::c(&Product::productName) == this->productName));
                if(idCheck){
                    std::cerr<<"Product ID already exists please try again.\n";
                    return;
                }
                if (!existingProduct.empty()){
                    std::cerr<<"Product exists.\n";
                    return;
                }
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