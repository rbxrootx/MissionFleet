// Reconstructed from FUN_101673e0 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void FUN_10103560();

extern "C" __declspec(naked) void FUN_101673e0() {
    __asm {
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        push edi
        push edi
        call FUN_10103560
        push edi
        push edi
        push edi
        push edi
        ; Exact immediate encoding: mov dword ptr [esi], 10176bb0h
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0xb0
        __asm _emit 0x6b
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact immediate encoding: mov dword ptr [esi + 4], 3
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: call dword ptr [10175098h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esi + 2ch], eax
        mov dword ptr [esi + 20h], edi
        mov dword ptr [esi + 24h], edi
        mov dword ptr [esi + 28h], edi
        mov dword ptr [esi + 3ch], edi
        mov dword ptr [esi + 30h], edi
        mov dword ptr [esi + 34h], edi
        mov dword ptr [esi + 38h], edi
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 54h], edi
        mov eax, esi
        pop edi
        pop esi
        ret
    }
}
