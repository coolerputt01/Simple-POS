#ifndef UTILS_H
#define UTILS_H

#include <ctime>
#include <string>

std::string getCurrentTime(){
    time_t now = time(0);
    
    tm *localTime = localtime(&now);

    char textBuffer[11];
    strftime(textBuffer,sizeof(textBuffer),"%d-%m-%Y",localTime);

    return std::string(textBuffer);
}

#endif