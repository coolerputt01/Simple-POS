#pragma once
#include "Orm/sqlite_orm.h"
#include <string>
#include "Product/Product.hpp"
using namespace sqlite_orm;

std::string SQLITE_DB_PATH = "./db.sqlite";

auto initStorage(){
    auto storage = make_storage(SQLITE_DB_PATH,make_table("products",
        make_column("id",&Product::id,primary_key()),
        make_column("product_name",&Product::productName),
        make_column("product_desc",&Product::productDesc),
        make_column("date_of_stock",&Product::dateOfStock),
        make_column("updated_at",&Product::updatedAt),
        make_column("category",&Product::getCategoryInt,&Product::setCategoryInt)
    ));
    return storage;
}