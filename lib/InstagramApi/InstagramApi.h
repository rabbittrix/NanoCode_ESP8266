#ifndef InstagramApi_h
#define InstagramApi_h

#include <Arduino.h>
#include <ArduinoJson.h>
#include <Client.h>

struct accountStatistics
{
    long followersCount;
    long followCount;
};

class InstagramApi
{

public:
    InstagramApi(char *url, Client &client);    
    InstagramApi(String url, Client &client);
    bool getAccountStatistics();
    accountStatistics accountStats;

private:
    char *_url;
    Client *client;
    void closeClient();
};

#endif

