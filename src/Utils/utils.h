#ifndef UTILS_H
#define UTILS_H

#include <ctime>
#include <string>

long long randomID(){
    static std::random_device rd;
    static std::mt19937_64 gen(rd());
    static std::uniform_int_distribution<long long> dist(
        1'000'000'000'000LL,
        9'999'999'999'999LL
    );
    return dist(gen);
}

std::string getCurrentTime(){
    time_t now = time(0);
    
    tm *localTime = localtime(&now);

    char textBuffer[11];
    strftime(textBuffer,sizeof(textBuffer),"%d-%m-%Y",localTime);

    return std::string(textBuffer);
}

void setToast(auto& signup,auto& textContent,auto& type){
    signup->set_typeDecl(type);
    signup->set_toastContent(textContent);
    signup->set_showToast(true);
}

#endif