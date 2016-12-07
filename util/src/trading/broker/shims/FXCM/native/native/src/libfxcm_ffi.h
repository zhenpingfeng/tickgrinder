#include "stdafx.h"

// really returns a IO2GSession*
extern "C" void* fxcm_login(char *username, char *password, char *url, bool live);
void print_accounts(IO2GSession *session);
extern "C" bool test_login(char *username, char *password, char *url, bool live);
extern "C" bool init_history_download(
    void* void_session,
    char* symbol,
    char* startTime,
    char* endTime,
    void (*tickcallback)(void*, uint64_t, double, double),
    void* user_data
);