#pragma once

#include <vector>
#include <numeric>
#include "../Utils/Utils.h"
#include "../Product/Product.hpp"

class Transaction {
    public:
        std::vector<Product> products;
        std::string dateOfTransaction;
        long long id;
        int total;
        
        Transaction(){
            id = randomID();
            dateOfTransaction = getCurrentTime();
        }
        Transaction(std::initializer_list<Product>& prod){
            id = randomID();
            dateOfTransaction = getCurrentTime();
            for(auto p : prod){
                p.updateTransactionID(id);
                products.push_back(p);
            }
        }

        void append(Product& prod){
            products.push_back(prod);
            prod.updateTransactionID(id);
        }
        int sum(){
            return std::accumulate(products.begin(),products.end(),0,[](int sum,Product& p){
                return sum + p.price;
            });
        }
        void getSum(){
            this->total = sum();
        }
        void save(auto& storage){
            try{
                storage.insert(*this);
                std::cout<<"Transaction successfully added.\n";

            }catch(const std::runtime_error& err){
                std::cerr<<"Error Occured: "<<err.what()<<std::endl;
                return;
            }
        }
        ~Transaction() = default;
};