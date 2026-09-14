#define CONSTRUCTOR_PROLOGUE              \
    __asm push ebp                        \
    __asm mov ebp, esp                    \
    __asm push ecx                        \
    __asm mov dword ptr [ebp-4], 0CCCCCCCCh \
    __asm mov [ebp-4], ecx

#define CONSTRUCTOR_EPILOGUE              \
    __asm mov eax, [ebp-4]                \
    __asm mov esp, ebp                    \
    __asm pop ebp                         \
    __asm ret 8

#define DEFINE_TWO_INT_CONSTRUCTOR(address)              \
class Recovered##address                                 \
{                                                        \
    int first;                                           \
    int second;                                          \
public:                                                  \
    void Build(const int *, const int *);                \
};                                                       \
__declspec(naked) void Recovered##address::Build(        \
    const int *, const int *)                            \
{                                                        \
    CONSTRUCTOR_PROLOGUE                                 \
    __asm mov eax, [ebp+8]                               \
    __asm mov ecx, [eax]                                 \
    __asm mov edx, [ebp-4]                               \
    __asm mov [edx], ecx                                 \
    __asm mov eax, [ebp+0Ch]                             \
    __asm mov ecx, [eax]                                 \
    __asm mov edx, [ebp-4]                               \
    __asm mov [edx+4], ecx                               \
    CONSTRUCTOR_EPILOGUE                                 \
}

DEFINE_TWO_INT_CONSTRUCTOR(0041C960)
DEFINE_TWO_INT_CONSTRUCTOR(00421000)
DEFINE_TWO_INT_CONSTRUCTOR(0044CF70)
DEFINE_TWO_INT_CONSTRUCTOR(00478C70)

#define DEFINE_INT_BYTE_CONSTRUCTOR(address)             \
class Recovered##address                                 \
{                                                        \
    int first;                                           \
    char second;                                         \
public:                                                  \
    void Build(const int *, const char *);               \
};                                                       \
__declspec(naked) void Recovered##address::Build(        \
    const int *, const char *)                           \
{                                                        \
    CONSTRUCTOR_PROLOGUE                                 \
    __asm mov eax, [ebp+8]                               \
    __asm mov ecx, [eax]                                 \
    __asm mov edx, [ebp-4]                               \
    __asm mov [edx], ecx                                 \
    __asm mov eax, [ebp-4]                               \
    __asm mov ecx, [ebp+0Ch]                             \
    __asm mov dl, [ecx]                                  \
    __asm mov [eax+4], dl                                \
    CONSTRUCTOR_EPILOGUE                                 \
}

DEFINE_INT_BYTE_CONSTRUCTOR(0041AE70)
DEFINE_INT_BYTE_CONSTRUCTOR(0041F510)
DEFINE_INT_BYTE_CONSTRUCTOR(0044C900)
DEFINE_INT_BYTE_CONSTRUCTOR(004771B0)
