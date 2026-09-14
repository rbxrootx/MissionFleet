#define DEFINE_DEBUG_BYTE_INITIALIZER(address) \
char *Recovered##address(char *output)          \
{                                               \
    char value;                                 \
    char *source = &value;                      \
    *output = value;                            \
    return output;                              \
}

DEFINE_DEBUG_BYTE_INITIALIZER(0041CCC0)
DEFINE_DEBUG_BYTE_INITIALIZER(00421260)
DEFINE_DEBUG_BYTE_INITIALIZER(0044D3B0)
DEFINE_DEBUG_BYTE_INITIALIZER(00478ED0)
DEFINE_DEBUG_BYTE_INITIALIZER(0047DE90)
