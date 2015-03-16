urlsafe_b64
===========

[![Build Status](https://travis-ci.org/Akagi201/urlsafe-b64.svg)](https://travis-ci.org/Akagi201/urlsafe-b64)

[![Build Status](https://webapi.biicode.com/v1/badges/Akagi201/Akagi201/urlsafe-b64/master)](https://www.biicode.com/Akagi201/urlsafe-b64) 

The standard 'base64url' with URL and Filename Safe Alphabet described in RFC 4648

## API

```
#include "b64.h"

int b64_encode(const uint8_t *in, size_t ilen, char *out, size_t *olen);

int b64_decode(const char *in, size_t ilen, uint8_t *out, size_t *olen);

int urlsafe_b64_encode(const uint8_t *in, size_t ilen, char *out, size_t *olen);

int urlsafe_b64_decode(const char *in, size_t ilen, uint8_t *out, size_t *olen);
```