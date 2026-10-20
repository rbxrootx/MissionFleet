// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002C1D0 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_1002c1d0_1002C1D0() {
    __asm {
        mov eax, dword ptr [ecx + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x1002c1ef
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [esp + 4]
        xor edx, edx
        ; Exact mapped bytes 66 8B 90 2C 03 00 00: mov dx, word ptr [eax + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, ecx
        ; Exact mapped bytes 74 09: je 0x1002c1f1
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [eax + 78h]
        test eax, eax
        ; Exact mapped bytes 75 EC: jne 0x1002c1db
        __asm _emit 0x75
        __asm _emit 0xec
        xor eax, eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
