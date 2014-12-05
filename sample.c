/*
 * @file test.c
 * @author Akagi201
 * @date 2014/12/05
 *
 * test for url safe base64
 */

#include <stdio.h>
#include <string.h>
#include <ldap.h>
#include <lber.h>
#include <AudioToolbox/AudioToolbox.h>
#include "b64.h"

int main(int argc, char *argv[]) {
    char in[] = "bradley";
    char out[256] = {0};
    char res[256] = {0};
    size_t len = 0;
    size_t len_res = 0;

    len = sizeof(out);
    len_res = sizeof(res);

    b64_encode(in, strlen(in), out, &len);
    printf("b64_enc: %s\n", out);

    b64_decode(out, len, res, &len_res);
    printf("b64_dec: %s\n", res);

    memset(out, 0, sizeof(out));
    len = sizeof(out);
    memset(res, 0, sizeof(res));
    len_res = sizeof(res);

    urlsafe_b64_encode(in, strlen(in), out, &len);
    printf("urlsafe_b64_enc: %s\n", out);

    urlsafe_b64_decode(out, len, res, &len_res);
    printf("urlsafe_b64_dec: %s\n", res);

    return 0;
}
