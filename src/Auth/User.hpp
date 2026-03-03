#pragma once

#include <string>
#include <iostream>
#include <vector>

#include "../Hashlib/bcrypt.h"
#include "../Orm/sqlite_orm.h"
#include "../Utils/Utils.h"
#include "./UserSession.h"


class User{
    public:
        std::string username;
        std::string email;
        std::string password;
        SESSION session;
        std::string lastLogin;
        int id;
        

        User() = default;

        User(std::string user,std::string pass,std::string em): username(user),email(em),password(pass){
            session = SESSION::LOGGED_OUT;
            lastLogin = "";
        }
        
        int getSessionInt() const { 
            return static_cast<int>(session); 
        }

        void setSessionInt(int sess) { 
            session = static_cast<SESSION>(sess); 
        }

        void signin(auto& storage){
            try {

                auto users = storage.template get_all<User>(sqlite_orm::where(sqlite_orm::c(&User::username) == this->username));
                if(users.empty()){
                    std::cerr<<"Username not found.\n";
                    return;
                }
                User& user = users[0];
                std::cout<<user.password<<std::endl;

                if(bcrypt::validatePassword(this->password, user.password)){
                    user.session = SESSION::LOGGED_IN;
                    user.lastLogin = getCurrentTime();
                    storage.replace(user);
                    *this = user;
                    std::cout<<"Log-in successful.\n";
                }else{
                    std::cerr<<"Password is incorrect.\n";
                    return;
                }
            }catch(const std::runtime_error&  err){
                std::cerr<<err.what()<<std::endl;
            }
        }
        
        void signup(auto& storage){
            std::string hashedPassword = bcrypt::generateHash(this->password);
            std::string original = this->password;
            
            try{
                this->password = hashedPassword;
                auto existingUser = storage.select(&User::username,sqlite_orm::where(sqlite_orm::c(&User::username) == this->username));
                
                if(!existingUser.empty()){
                    std::cerr<<"Username already exists!\n";
                    this->password = original;
                    return;
                }
                if(this->password.length() <= 8){
                    std::cerr<<"Password is too short.(At least 8 characters.)\n";
                    return;
                }
                storage.insert(*this);
                this->password = original;
                std::cout<<"Successfully created user!\n";
            }catch(const std::runtime_error& err){
                this->password = original;
                std::cerr<< err.what()<<std::endl;
            }
        }
        
        ~User() = default;
};