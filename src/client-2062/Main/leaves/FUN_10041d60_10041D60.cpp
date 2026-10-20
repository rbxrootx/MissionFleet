// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10041D60 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_10041d60_10041D60() {
    __asm {
        mov eax, dword ptr [esp + 8]
        test eax, eax
        ; Exact mapped bytes 76 1A: jbe 0x10041d82
        __asm _emit 0x76
        __asm _emit 0x1a
        mov edx, dword ptr [esp + 0ch]
        mov ecx, eax
        mov eax, dword ptr [esp + 4]
        push esi
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x10041d7b
        __asm _emit 0x74
        __asm _emit 0x04
        mov esi, dword ptr [edx]
        mov dword ptr [eax], esi
        add eax, 4
        dec ecx
        ; Exact mapped bytes 75 F2: jne 0x10041d73
        __asm _emit 0x75
        __asm _emit 0xf2
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
