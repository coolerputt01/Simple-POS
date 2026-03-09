#ifndef UTILS_H
#define UTILS_H

#include <ctime>
#include <string>

long long randomID(){
    std::random_device rd;
    std::mt19937_64 gen(rd());
    std::uniform_int_distribution<long long> dist(1'000'000'000'000'000LL);
    return dist(gen);
}

std::string getCurrentTime(){
    time_t now = time(0);
    
    tm *localTime = localtime(&now);

    char textBuffer[11];
    strftime(textBuffer,sizeof(textBuffer),"%d-%m-%Y",localTime);

    return std::string(textBuffer);
}

#endif