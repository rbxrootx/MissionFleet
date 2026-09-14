#define DEBUG_THIS_FRAME_68              \
    __asm push ebp                       \
    __asm mov ebp, esp                   \
    __asm sub esp, 44h                   \
    __asm push ebx                       \
    __asm push esi                       \
    __asm push edi                       \
    __asm push ecx                       \
    __asm lea edi, [ebp-44h]             \
    __asm mov ecx, 11h                   \
    __asm mov eax, 0CCCCCCCCh            \
    __asm rep stosd                      \
    __asm pop ecx                        \
    __asm mov [ebp-4], ecx

#define DEBUG_FRAME_EPILOGUE             \
    __asm pop edi                        \
    __asm pop esi                        \
    __asm pop ebx                        \
    __asm mov esp, ebp                   \
    __asm pop ebp

#define DEFINE_RETURN_THIS(address)                       \
class Recovered##address                                  \
{                                                         \
public:                                                   \
    Recovered##address *Run();                            \
};                                                        \
__declspec(naked) Recovered##address *Recovered##address::Run() \
{                                                         \
    DEBUG_THIS_FRAME_68                                   \
    __asm mov eax, [ebp-4]                                \
    DEBUG_FRAME_EPILOGUE                                  \
    __asm ret                                             \
}

DEFINE_RETURN_THIS(00412880)
DEFINE_RETURN_THIS(00420A50)
DEFINE_RETURN_THIS(00420D00)
DEFINE_RETURN_THIS(00420D30)

#define DEFINE_RETURN_ZERO(address)               \
class Recovered##address                          \
{                                                 \
public:                                           \
    int Run(int, int);                            \
};                                                \
__declspec(naked) int Recovered##address::Run(int, int) \
{                                                 \
    DEBUG_THIS_FRAME_68                           \
    __asm xor eax, eax                            \
    DEBUG_FRAME_EPILOGUE                          \
    __asm ret 8                                   \
}

DEFINE_RETURN_ZERO(00409E50)
DEFINE_RETURN_ZERO(0041A1B0)
DEFINE_RETURN_ZERO(0041C2D0)
DEFINE_RETURN_ZERO(0041F280)

#define DEFINE_GET_OFFSET_12(address)             \
class Recovered##address                          \
{                                                 \
    char padding[12];                             \
    int value;                                    \
public:                                           \
    int Get();                                    \
};                                                \
__declspec(naked) int Recovered##address::Get()   \
{                                                 \
    DEBUG_THIS_FRAME_68                           \
    __asm mov eax, [ebp-4]                        \
    __asm mov eax, [eax+0Ch]                      \
    DEBUG_FRAME_EPILOGUE                          \
    __asm ret                                     \
}

DEFINE_GET_OFFSET_12(004056A0)
DEFINE_GET_OFFSET_12(00412670)
DEFINE_GET_OFFSET_12(00414060)
DEFINE_GET_OFFSET_12(004208F0)

#define DEBUG_ARGUMENT_FRAME_68          \
    __asm push ebp                       \
    __asm mov ebp, esp                   \
    __asm sub esp, 44h                   \
    __asm push ebx                       \
    __asm push esi                       \
    __asm push edi                       \
    __asm lea edi, [ebp-44h]             \
    __asm mov ecx, 11h                   \
    __asm mov eax, 0CCCCCCCCh            \
    __asm rep stosd

#define DEFINE_COPY_DEBUG_BYTE(address)          \
__declspec(naked) char *Recovered##address(char *) \
{                                                \
    DEBUG_ARGUMENT_FRAME_68                      \
    __asm mov eax, [ebp+8]                       \
    __asm mov cl, [ebp-4]                        \
    __asm mov [eax], cl                           \
    __asm mov eax, [ebp+8]                       \
    DEBUG_FRAME_EPILOGUE                         \
    __asm ret                                    \
}

DEFINE_COPY_DEBUG_BYTE(0040D220)
DEFINE_COPY_DEBUG_BYTE(0040D360)
DEFINE_COPY_DEBUG_BYTE(0040D5E0)
DEFINE_COPY_DEBUG_BYTE(00413E90)
