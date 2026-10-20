// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B2160 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_587b2160() {
    __asm {
        cmp dword ptr [esp + 4], 0
        ; Exact mapped bytes 75 25: jne 0x587b218c
        __asm _emit 0x75
        __asm _emit 0x25
        mov eax, dword ptr [ecx + 31ch]
        xor eax, 0aaaaaaaah
        ; Exact mapped bytes 7E 3D: jle 0x587b21b1
        __asm _emit 0x7e
        __asm _emit 0x3d
        movzx ecx, word ptr [ecx + 308h]
        cdq
        and ecx, 0ffh
        idiv ecx
        xor eax, 0aah
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 3d0h]
        xor eax, 0aaaaaaaah
        ; Exact mapped bytes 7E 18: jle 0x587b21b1
        __asm _emit 0x7e
        __asm _emit 0x18
        movzx ecx, word ptr [ecx + 3bch]
        cdq
        and ecx, 0ffh
        idiv ecx
        xor eax, 0aah
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, 0aah
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
