#define DEFINE_RETURN(address, value) \
    extern "C" __declspec(naked) void Recovered##address() \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm mov eax, value \
        __asm pop ebp \
        __asm ret \
    }

#define DEFINE_DEBUG_OFFSET(address, offset) \
    extern "C" __declspec(naked) void Recovered##address() \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm push ecx \
        __asm mov dword ptr [ebp-4], ecx \
        __asm mov eax, dword ptr [ebp-4] \
        __asm add eax, offset \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret \
    }

#define DEFINE_DEBUG_GET(address, offset) \
    extern "C" __declspec(naked) void Recovered##address() \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm push ecx \
        __asm mov dword ptr [ebp-4], ecx \
        __asm mov eax, dword ptr [ebp-4] \
        __asm mov eax, dword ptr [eax+offset] \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret \
    }

#define DEFINE_CC_OFFSET(address, offset) \
    extern "C" __declspec(naked) void Recovered##address() \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm push ecx \
        __asm mov dword ptr [ebp-4], 0CCCCCCCCh \
        __asm mov dword ptr [ebp-4], ecx \
        __asm mov eax, dword ptr [ebp-4] \
        __asm add eax, offset \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret \
    }

#define DEFINE_CC_GET(address, offset) \
    extern "C" __declspec(naked) void Recovered##address() \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm push ecx \
        __asm mov dword ptr [ebp-4], 0CCCCCCCCh \
        __asm mov dword ptr [ebp-4], ecx \
        __asm mov eax, dword ptr [ebp-4] \
        __asm mov eax, dword ptr [eax+offset] \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret \
    }

#define DEFINE_CC_SET(address, offset) \
    extern "C" __declspec(naked) void Recovered##address(int) \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm push ecx \
        __asm mov dword ptr [ebp-4], 0CCCCCCCCh \
        __asm mov dword ptr [ebp-4], ecx \
        __asm mov eax, dword ptr [ebp-4] \
        __asm mov ecx, dword ptr [ebp+8] \
        __asm mov dword ptr [eax+offset], ecx \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret 4 \
    }

extern "C" __declspec(naked) void Recovered00435A90()
{
    __asm xor eax, eax
    __asm ret
}

DEFINE_RETURN(0043CEE0, 8)
DEFINE_RETURN(0043CF20, 8)
DEFINE_RETURN(0043CF60, 8)
DEFINE_RETURN(0043CED0, 16)
DEFINE_RETURN(0043CF10, 16)
DEFINE_RETURN(0043CF50, 16)
DEFINE_DEBUG_OFFSET(00436670, 12)
DEFINE_DEBUG_OFFSET(00449650, 12)
DEFINE_DEBUG_GET(00528152, 88)
DEFINE_DEBUG_GET(005605C2, 92)
DEFINE_CC_OFFSET(0042C520, 92)
DEFINE_CC_GET(0042C380, 260)
DEFINE_CC_SET(00429900, 100)
