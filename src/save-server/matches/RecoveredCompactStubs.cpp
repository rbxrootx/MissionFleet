#define DEFINE_FRAME_RET(address, cleanup) \
    extern "C" __declspec(naked) void Recovered##address() \
    { __asm push ebp __asm mov ebp, esp __asm pop ebp __asm ret cleanup }

#define DEFINE_RETURN_ONE(address) \
    extern "C" __declspec(naked) void Recovered##address() \
    { __asm push ebp __asm mov ebp, esp __asm mov eax, 1 __asm pop ebp __asm ret }

#define DEFINE_ADJUST(address, operation) \
    extern "C" __declspec(naked) void Recovered##address(void *) \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm mov eax, dword ptr [ebp+8] \
        __asm operation eax, 32 \
        __asm pop ebp \
        __asm ret \
    }

#define DEFINE_STATUS(address, value, cleanup) \
    extern "C" __declspec(naked) void Recovered##address() \
    { __asm push ebp __asm mov ebp, esp __asm mov eax, value __asm pop ebp __asm ret cleanup }

#define DEFINE_SAVE_THIS_RET(address, value, cleanup) \
    extern "C" __declspec(naked) void Recovered##address() \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm push ecx \
        __asm mov dword ptr [ebp-4], ecx \
        __asm mov eax, value \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret cleanup \
    }

#define DEFINE_SAVE_THIS_ONLY(address, cleanup) \
    extern "C" __declspec(naked) void Recovered##address() \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm push ecx \
        __asm mov dword ptr [ebp-4], ecx \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret cleanup \
    }

#define DEFINE_SAVE_THIS_MINUS_ONE(address, cleanup) \
    extern "C" __declspec(naked) void Recovered##address() \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm push ecx \
        __asm mov dword ptr [ebp-4], ecx \
        __asm or eax, -1 \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret cleanup \
    }

#define DEFINE_ALIGN_EIGHT(address) \
    extern "C" __declspec(naked) void Recovered##address(unsigned int) \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm mov eax, dword ptr [ebp+8] \
        __asm add eax, 7 \
        __asm and al, 0F8h \
        __asm pop ebp \
        __asm ret \
    }

extern "C" __declspec(naked) void Recovered0045F390(unsigned int)
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp+8]
    __asm shr eax, 4
    __asm pop ebp
    __asm ret 4
}

DEFINE_FRAME_RET(00556526, 8)
DEFINE_RETURN_ONE(00472480)
DEFINE_ADJUST(0047C030, add)
DEFINE_ADJUST(004773A0, sub)
DEFINE_STATUS(0044D1DD, 080004001h, 20)
DEFINE_STATUS(005695B3, 080040003h, 8)
DEFINE_STATUS(0057B09D, 080004005h, 12)
DEFINE_SAVE_THIS_ONLY(0056AEF6, 12)
DEFINE_ALIGN_EIGHT(0043CE40)
DEFINE_ALIGN_EIGHT(0043CEC0)
DEFINE_SAVE_THIS_MINUS_ONE(004ED646, 20)
DEFINE_SAVE_THIS_RET(00437830, -2, 0)
DEFINE_SAVE_THIS_RET(0043C8E0, -2, 0)
DEFINE_SAVE_THIS_RET(0043D160, 03FFFFFFFh, 0)
DEFINE_SAVE_THIS_RET(0043DD90, 03FFFFFFFh, 0)
