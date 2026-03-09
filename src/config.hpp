#pragma once
#include "Orm/sqlite_orm.h"
#include <string>
#include "Product/Product.hpp"
#include "Transaction/Transaction.hpp"
#include "Auth/User.hpp"
using namespace sqlite_orm;

std::string SQLITE_DB_PATH = "./db.sqlite";

auto initStorage(){
    auto storage = make_storage(SQLITE_DB_PATH,make_table("products",
        make_column("id",&Product::id,primary_key()),
        make_column("product_name",&Product::productName),
        make_column("product_desc",&Product::productDesc),
        make_column("price",&Product::price),
        make_column("date_of_stock",&Product::dateOfStock),
        make_column("updated_at",&Product::updatedAt),
        make_column("transaction_id",&Product::transactionID),
        make_column("category",&Product::getCategoryInt,&Product::setCategoryInt)
    ),make_table("users",
        make_column("id",&User::id,primary_key().autoincrement()),
        make_column("username",&User::username),
        make_column("email",&User::email),
        make_column("password",&User::password),
        make_column("last_login",&User::lastLogin),
        make_column("session",&User::getSessionInt,&User::setSessionInt)
    ),make_table("transactions",
        make_column("id",&Transaction::id),
        make_column("sum",&Transaction::total),
        make_column("date_of_transaction",&Transaction::dateOfTransaction)
    ));
    return storage;
}