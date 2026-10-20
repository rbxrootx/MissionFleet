// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587EADD0 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_587eadd0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        ; Exact mapped bytes 8B 35 F8 47 A2 58: mov esi, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, dword ptr [esi + 4]
        mov edx, eax
        shl edx, 4
        cmp dword ptr [esi + edx + 1398h], 0
        pop esi
        ; Exact mapped bytes 75 15: jne 0x587eae03
        __asm _emit 0x75
        __asm _emit 0x15
        cmp dword ptr [ecx + eax*4 + 98h], 0
        ; Exact mapped bytes 74 0B: je 0x587eae03
        __asm _emit 0x74
        __asm _emit 0x0b
        mov dword ptr [ecx + eax*4 + 98h], 0
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
