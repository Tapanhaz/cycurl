#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define CURL_STATICLIB
#include "curl/curl.h"

int _curl_easy_setopt(CURL* curl, int option, void* param);
