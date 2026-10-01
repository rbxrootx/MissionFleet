// Reconstructed from FUN_10103b80 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void InitializeCommon();

extern "C" __declspec(naked) void InitializeControlNode() {
    __asm {
        mov eax, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 10h]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 18h]
        push 40h
        push eax
        mov eax, dword ptr [esp + 18h]
        push ecx
        mov ecx, dword ptr [esp + 14h]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call InitializeCommon
        mov eax, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 0ch]
        mov ecx, dword ptr [esp + 20h]
        mov dword ptr [esi + 68h], eax
        mov dword ptr [esi + 50h], edx
        mov edx, dword ptr [esp + 24h]
        xor eax, eax
        mov dword ptr [esi + 60h], ecx
        mov dword ptr [esi + 54h], eax
        mov dword ptr [esi + 78h], eax
        mov dword ptr [esi + 7ch], eax
        mov dword ptr [esi + 80h], eax
        mov dword ptr [esi + 84h], eax
        mov dword ptr [esi + 88h], eax
        mov dword ptr [esi + 74h], eax
        mov dword ptr [esi + 64h], edx
        ; Exact immediate encoding: mov dword ptr [esi + 58h], 8
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov dword ptr [esi + 5ch], 10h
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x5c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov dword ptr [esi], 10176818h
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x18
        __asm _emit 0x68
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esi + 6ch], ecx
        mov dword ptr [esi + 70h], edx
        ; Exact immediate encoding: mov dword ptr [esi + 8ch], 0ffffh
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop esi
        ret 24h
    }
}
