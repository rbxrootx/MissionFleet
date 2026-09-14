#define DEBUG_FILL_68 \
        __asm sub esp, 68 \
        __asm push ebx \
        __asm push esi \
        __asm push edi \
        __asm lea edi, [ebp-68] \
        __asm mov ecx, 17 \
        __asm mov eax, 0CCCCCCCCh \
        __asm rep stosd

#define DEBUG_FILL_68_SAVE_ECX \
        __asm sub esp, 68 \
        __asm push ebx \
        __asm push esi \
        __asm push edi \
        __asm _emit 051h \
        __asm lea edi, [ebp-68] \
        __asm mov ecx, 17 \
        __asm mov eax, 0CCCCCCCCh \
        __asm rep stosd

#define DEBUG_RESTORE \
        __asm pop edi \
        __asm pop esi \
        __asm pop ebx \
        __asm mov esp, ebp \
        __asm pop ebp

#define DEFINE_UNINITIALIZED_BYTE(address) \
    extern "C" __declspec(naked) void Recovered##address() \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        DEBUG_FILL_68 \
        __asm mov al, byte ptr [ebp-4] \
        DEBUG_RESTORE \
        __asm ret \
    }

#define DEFINE_RETURN_ARGUMENT(address) \
    extern "C" __declspec(naked) void Recovered##address(void *) \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        DEBUG_FILL_68_SAVE_ECX \
        __asm pop ecx \
        __asm mov dword ptr [ebp-4], ecx \
        __asm mov eax, dword ptr [ebp+8] \
        DEBUG_RESTORE \
        __asm ret 4 \
    }

#define DEFINE_RETURN_ONE(address) \
    extern "C" __declspec(naked) void Recovered##address() \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        DEBUG_FILL_68_SAVE_ECX \
        __asm pop ecx \
        __asm mov dword ptr [ebp-4], ecx \
        __asm mov eax, 1 \
        DEBUG_RESTORE \
        __asm ret \
    }

#define DEFINE_INITIALIZE_TRIPLE(address) \
    extern "C" __declspec(naked) void Recovered##address(void *) \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm sub esp, 8 \
        __asm mov dword ptr [ebp-8], ecx \
        __asm mov eax, dword ptr [ebp-8] \
        __asm mov dword ptr [eax], 0 \
        __asm mov ecx, dword ptr [ebp-8] \
        __asm mov dword ptr [ecx+4], 0 \
        __asm mov edx, dword ptr [ebp-8] \
        __asm add edx, 8 \
        __asm mov dword ptr [ebp-4], edx \
        __asm mov eax, dword ptr [ebp-4] \
        __asm mov dword ptr [eax], 0 \
        __asm mov eax, dword ptr [ebp-8] \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret 4 \
    }

#define DEFINE_FLATTEN_INDEX(address) \
    extern "C" __declspec(naked) void Recovered##address(int, int, int, int) \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm push ecx \
        __asm mov dword ptr [ebp-4], ecx \
        __asm mov eax, dword ptr [ebp+8] \
        __asm imul eax, 24 \
        __asm mov ecx, dword ptr [ebp+12] \
        __asm add ecx, eax \
        __asm imul ecx, 60 \
        __asm mov edx, dword ptr [ebp+16] \
        __asm add edx, ecx \
        __asm imul edx, 60 \
        __asm mov eax, dword ptr [ebp+20] \
        __asm add eax, edx \
        __asm mov ecx, dword ptr [ebp-4] \
        __asm mov dword ptr [ecx], eax \
        __asm mov eax, dword ptr [ebp-4] \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret 16 \
    }

DEFINE_UNINITIALIZED_BYTE(0040D1F0)
DEFINE_UNINITIALIZED_BYTE(00413DA0)
DEFINE_UNINITIALIZED_BYTE(00413E60)
DEFINE_RETURN_ARGUMENT(0040C150)
DEFINE_RETURN_ARGUMENT(0040D7A0)
DEFINE_RETURN_ARGUMENT(00422490)
DEFINE_RETURN_ONE(00402C60)
DEFINE_RETURN_ONE(004062E0)
DEFINE_RETURN_ONE(00409760)
DEFINE_INITIALIZE_TRIPLE(0043C8F0)
DEFINE_INITIALIZE_TRIPLE(0043D290)
DEFINE_INITIALIZE_TRIPLE(0043DF20)
DEFINE_FLATTEN_INDEX(00525212)
