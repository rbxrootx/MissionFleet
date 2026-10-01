// Reconstructed from FUN_101047f0 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void InitializeControlVariantBase();

extern "C" __declspec(naked) void InitializeControlVariant() {
    __asm {
        mov eax, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 1ch]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 24h]
        push 0
        push eax
        mov eax, dword ptr [esp + 24h]
        push ecx
        mov ecx, dword ptr [esp + 24h]
        push edx
        mov edx, dword ptr [esp + 24h]
        push eax
        mov eax, dword ptr [esp + 24h]
        push ecx
        mov ecx, dword ptr [esp + 24h]
        push edx
        mov edx, dword ptr [esp + 24h]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call InitializeControlVariantBase
        ; Exact immediate encoding: mov dword ptr [esi], 1017685ch
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x5c
        __asm _emit 0x68
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, esi
        pop esi
        ret 24h
    }
}
