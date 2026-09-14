#define DEBUG_FILL_BODY                 \
    __asm push ebp                      \
    __asm mov ebp, esp                  \
    __asm sub esp, 40h                  \
    __asm push ebx                      \
    __asm push esi                      \
    __asm push edi                      \
    __asm lea edi, [ebp-40h]            \
    __asm mov ecx, 10h                  \
    __asm mov eax, 0CCCCCCCCh           \
    __asm rep stosd

#define DEBUG_FILL_RETURN               \
    __asm pop edi                       \
    __asm pop esi                       \
    __asm pop ebx                       \
    __asm mov esp, ebp                  \
    __asm pop ebp                       \
    __asm ret

__declspec(naked) void Recovered0040CF00()
{
    DEBUG_FILL_BODY
    DEBUG_FILL_RETURN
}

__declspec(naked) void Recovered0040D5B0()
{
    DEBUG_FILL_BODY
    DEBUG_FILL_RETURN
}

__declspec(naked) void Recovered0040D6D0()
{
    DEBUG_FILL_BODY
    DEBUG_FILL_RETURN
}

__declspec(naked) void Recovered00413D40()
{
    DEBUG_FILL_BODY
    DEBUG_FILL_RETURN
}

__declspec(naked) void *Recovered0040D0D0(void *)
{
    DEBUG_FILL_BODY
    __asm mov eax, [ebp+8]
    DEBUG_FILL_RETURN
}

__declspec(naked) void *Recovered0040D100(void *)
{
    DEBUG_FILL_BODY
    __asm mov eax, [ebp+8]
    DEBUG_FILL_RETURN
}

__declspec(naked) void *Recovered004133C0(void *)
{
    DEBUG_FILL_BODY
    __asm mov eax, [ebp+8]
    DEBUG_FILL_RETURN
}

__declspec(naked) void *Recovered00413D70(void *)
{
    DEBUG_FILL_BODY
    __asm mov eax, [ebp+8]
    DEBUG_FILL_RETURN
}
