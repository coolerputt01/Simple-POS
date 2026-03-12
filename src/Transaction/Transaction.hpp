#pragma once

#include <vector>
#include <numeric>
#include "../Utils/Utils.h"
#include "../Product/Product.hpp"

struct TransactionItem {
    unsigned int id;
    long long transactionID;
    long long productID;
    unsigned int quantity;
};

class Transaction {
    public:
        std::vector<Product> products;
        std::vector<TransactionItem> transactions;
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
                transactions.push_back({0,id,p.id,2});
                products.push_back(p);
            }
        }

        void append(Product& prod,unsigned int quan){
            products.push_back(prod);
            transactions.push_back({0,id,prod.id,quan});
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
                for(auto& t : transactions){
                    storage.replace(t);
                }
                storage.replace(*this);
                std::cout<<"Transaction successfully added.\n";

            }catch(const std::runtime_error& err){
                std::cerr<<"Error Occured: "<<err.what()<<std::endl;
                return;
            }
        }
        ~Transaction() = default;
};