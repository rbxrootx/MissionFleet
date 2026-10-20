// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58908BE0 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_58908be0() {
    __asm {
        ; Exact mapped bytes A1 C4 84 A2 58: mov eax, dword ptr [0x58a284c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push eax
        mov esi, ecx
        ; Exact mapped bytes FF 15 D0 C3 98 58: call dword ptr [0x5898c3d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [esi + 50h]
        or dword ptr [esi + 68h], 1
        cmp eax, 2
        ; Exact mapped bytes 75 0B: jne 0x58908c06
        __asm _emit 0x75
        __asm _emit 0x0b
        mov dword ptr [esi + 50h], 4
        xor eax, eax
        pop esi
        ret
        cmp eax, 3
        ; Exact mapped bytes 75 0B: jne 0x58908c16
        __asm _emit 0x75
        __asm _emit 0x0b
        mov dword ptr [esi + 50h], 6
        xor eax, eax
        pop esi
        ret
        mov eax, dword ptr [esi + 34h]
        pop esi
        ret
    }
}
